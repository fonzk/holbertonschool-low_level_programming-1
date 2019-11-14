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
/*file descriptors, one to read from one to write */
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
/* order does not matter here. leading 0 here is octal */
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
/* loop to copy from file to to file */
	do{
		rc = read(filefrom, buffer, BUFF);
		if (rc == -1)
			return (-1);
/* not 1024 because that's not always the case. don't want to write more than
   you read */
		wc = write(fileto, buffer, rc);
/* check for write is special */
/* need to write same number of char as you read */
		if (wc == -1 || wc != rc)
			return (-1);

/* how do you know when there is nothing left to read */
/* like if you print 500 bytesl you've got the leftovers */
	}while(rc == BUFF);

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
