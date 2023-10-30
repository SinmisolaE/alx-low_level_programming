#include "main.h"

/**
 * append_text_to_file - append a text to a file
 * @filename: the file
 * @text_content: the text to append
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int count = 0;
	int lengthrw;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		while (text_content[count])
			count++;
	}
		lengthrw = write(file, text_content, count);
		if (lengthrw == -1)
			return (-1);


	close(file);
	return (1);
}
