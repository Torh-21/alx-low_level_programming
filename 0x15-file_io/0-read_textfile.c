#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 *
 * @filename: file argument
 * @letters: character count argument
 *
 * Return: character count or NULL or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc;
	ssize_t readBytes, writeBytes;
	char *buffptr;

	if (filename == NULL)
		return (0);

	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
		return (0);

	buffptr = (char *)malloc(letters);
	if (buffptr == NULL)
	{
		close(filedesc);
		return (0);
	}

	readBytes = read(filedesc, buffptr, letters);
	writeBytes = write(STDOUT_FILENO, buffptr, readBytes);

	if (readBytes == -1 || writeBytes == -1 || (readBytes != writeBytes))
	{
		close(filedesc);
		free(buffptr);
		return (0);
	}

	close(filedesc);
	free(buffptr);
	return (writeBytes);
}
