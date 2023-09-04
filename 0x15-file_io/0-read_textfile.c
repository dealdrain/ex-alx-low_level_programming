#include "main.h"

/**
 ** read_textfile - reads a text file and prints it to the POSIX
 ** @filename: source file
 ** @letters: Letters to reads and prints
 **
 ** Return: int
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	int r;

	char *hat = malloc(sizeof(char *) * letters);

	if (!hat)
		return (0);

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY, 0600);
	if (x == -1)
		return (0);

	r = read(x, hat, letters);
	write(STDOUT_FILENO, hat, r);
	free(hat);

	close(x);

	return (r);
}

