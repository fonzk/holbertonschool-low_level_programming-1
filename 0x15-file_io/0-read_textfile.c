#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to filename
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, fr, fw;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	fr = read(fd, buffer, letters);
	if (fr == -1)
		return (0);

	fw = write(STDOUT_FILENO, buffer, fr);
	if (fw == -1)
		return(0);

	free(buffer);
	close(fd);

	return (fw);
}
