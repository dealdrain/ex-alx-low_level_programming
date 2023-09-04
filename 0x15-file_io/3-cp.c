#include "main.h"

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 *  * main - create the copy bash script
 *  * @ac: argument count
 *  * @av: arguments as strings
 *  * Return: 0
 **/

int main(int ac, char *av[])
{
	int incp;
	int outcp;
	int att;
	int atto;
	char ed[MAXSIZE];
	mode_t ad;

	ad = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	incp = open(av[1], O_RDONLY);
	if (incp == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	outcp = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, ad);
	if (outcp == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		att = read(incp, ed, MAXSIZE);
		if (att == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (att > 0)
		{
			atto = write(outcp, ed, (ssize_t) att);
			if (atto == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (att > 0);
	att = close(incp);
	if (att == -1)
		dprintf(SE, "Error: Can't close fd %d\n", incp), exit(100);
	atto = close(outcp);
	if (atto == -1)
		dprintf(SE, "Error: Can't close fd %d\n", outcp), exit(100);
	return (0);
}

