#include "holberton.h"
/**
 * _close - close program
 * @file: file name
 */
void _close(int file)
{
	int f;

	f = close(file);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - entry
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int filefrom, fileto, fw;
	ssize_t count;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	filefrom = open(argv[1], O_RDONLY);
	if (filefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}


/* need to check if read works here */ 
	while ((count = read(filefrom, buffer, 1024)) != 0)
		fw = write(fileto, buffer, count);


	_close(filefrom);
	_close(fileto);

	return (0);
}
