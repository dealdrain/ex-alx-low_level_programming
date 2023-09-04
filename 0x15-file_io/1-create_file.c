#include "main.h"

/**
 *  * create_file - a function that creates a file
 *  * @filename: name of theted file
 *  * @text_content: string to the file
 *  * Return: 1 for success and -1 for failure
 **/

int create_file(const char *filename, char *text_content)
{
	int rw;
	int att;
	int y;

	if (filename == NULL)
		return (-1);

	rw = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (rw == -1)
		return (-1);

	if (text_content)
	{
		for (y = 0; text_content[y] != '\0'; y++)
			;
		att = write(rw, text_content, y);
		if (att == -1)
			return (-1);
	}

	close(rw);

	return (1);
}

