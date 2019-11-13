#include "holberton.h"
/**
 * void - entry
 * @fie: file name
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
 * @arg: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int filefrom, fileto;

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
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}


	close(filefrom);
	close(fileto);

}
