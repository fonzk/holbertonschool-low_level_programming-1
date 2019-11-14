#include "holberton.h"
#include <stdio.h>
#define BUFF 1024

/**
 * main - entry
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	ssize_t filefrom, fileto, wc, rc, cc, cd;
	char buffer[BUFF];

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

	do {
		rc = read(filefrom, buffer, BUFF);
		if (rc == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wc = write(fileto, buffer, rc);

		if (wc == -1 || wc != rc)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit(99);
		}

	} while (rc == BUFF);

	cc = close(filefrom);
	if (cc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close  %s", argv[1]);
		exit(100);
	}
	cd = close(fileto);
	if (cd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close  %s", argv[2]);
		exit(100);
	}

	return (0);
}
