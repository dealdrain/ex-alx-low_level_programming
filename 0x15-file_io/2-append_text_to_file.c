#include "main.h"

/**
 *  * append_text_to_file - Appends a text to the end of a file
 *
 *  * @filename: file name
 *
 *  * @text_content: str to add to the end of the file
 *  * Return: 1 for success, -1 for failure
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int ren;
	int live;
	int x;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	ren = open(filename, O_APPEND | O_WRONLY);
	if (ren == -1)
		return (-1);

	for (x = 0; text_content[x] != '\0'; x++)
		;

	live = write(ren, text_content, x);
	if (live == -1)
		return (-1);

	close(ren);

	return (1);
}

