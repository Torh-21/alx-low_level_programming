#include "main.h"
/**
 * main - copies the content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:  0 (Success)
 */
int main(int argc, char **argv)
{
	int filesrc, filedest, fcheck;
	char buffer[1024];

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(1);	}
	filesrc = open(argv[1], O_RDONLY);
	if (filesrc == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);	}
	filedest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (filedest == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(filesrc);
		exit(99);	}
	while ((fcheck = read(filesrc, buffer, 1024)) > 0)
	{
		if (fcheck == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);		}
		fcheck = write(filedest, buffer, fcheck);
		if (fcheck == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);		}
	}
	if (fcheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);	}
	if (close(filesrc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filesrc);
		exit(100);	}
	if (close(filedest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedest);
		exit(100);	}

	return (0);
}
