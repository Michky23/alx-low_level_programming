#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: to print filename (string pointer)
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	ssize_t nread, nwrite;
	char *buffz;

	if (!filename)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
		return (0);

	buffz = malloc(sizeof(char) * letters);
	if (buffz == NULL)
		return (0);

	nread = read(fl, buffz, letters);
	nwrite = write(STDOUT_FILENO, buffz, nread);

	close(fl);
	free(buffz);

	return (nwrite);
}
