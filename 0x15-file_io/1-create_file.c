#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file to be created
 * @text_content: file into file created
 * Return: 1 if success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int count = 0;
	int lengrw;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	while (text_content[count])
		count++;
	lengrw = write(file, text_content, count);

	if (lengrw == -1)
		return (-1);
	close(file);
	return (1);
}
