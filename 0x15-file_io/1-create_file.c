#include "main.h"
/**
 * create_file - creates a file
 *
 * @filename: file argument
 * @text_content: file content argument
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int filedesc, textLen, writeBytes;

	if (filename == NULL)
		return (-1);

	filedesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filedesc == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	textLen = 0;
	while (text_content[textLen])
	{
		textLen++;
	}

	writeBytes = write(filedesc, text_content, textLen);
	if (writeBytes == -1)
	{
		close(filedesc);
		return (-1);
	}

	close(filedesc);
	return (1);
}
