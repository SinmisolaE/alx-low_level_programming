#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
void set_IOstat(int stat, int fd, char *filename, char mode);

/**
 * main - main method
 * @argc: num of arguments
 * @argv: pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int numR = 1024;
	int towrite;
	int from, to;
	int end_from, end_to;
	unsigned int mod = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	set_IOstat(from, -1, argv[1], 'X');
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mod);
	set_IOstat(to, -1, argv[2], 'Y');

	while (numR == 1024)
	{
		numR = read(from, buff, sizeof(buff));
		if (numR == -1)
			set_IOstat(-1, -1, argv[1], 'X');
		towrite = write(to, buff, numR);
		if (towrite == -1)
			set_IOstat(-1, -1, argv[2], 'Y');
	}
	end_from = close(from);
	set_IOstat(end_from, from, NULL, 'T');
	end_to = close(to);
	set_IOstat(end_to, to, NULL, 'T');
	return (0);
}

/**
 * set_IOstat - if file could be opened or closed
 * @stat: discriptor of file to be opened
 * @fd: file descriptor
 * @filename: thr file
 * @mode: clos or open
 */
void set_IOstat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'T' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'X' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", filename);
		exit(98);
	}
	else if (mode == 'Y' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		exit(99);
	}
}
