#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: the filename
 * @letters: num letters to be read
 * Return: number of letters or 0 if error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int *file;
	ssize_t length, length2;
	char *buff;

	if (filename == NULL)
		return (0);

	file = open(filename, 0_RDONLY);
	if (file == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(file);
		return (0);
	}
	length = read(file, buff, letters);
	close(file);
	if (length == -1)
	{
		free(buff);
		return (0);
	}
	lenght2 = write(STDOUT_FILENO, buff, length);
	free(buff);
	if (length != length2)
		return (0);
	return (length2);
}
