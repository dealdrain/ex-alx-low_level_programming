#include "main.h"

/**
 * * binary_to_uint - convert bin to unsigned int
 * * @b: char
 *
 * * Return: decimal number, otherwise 0
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int convno;
	unsigned int rtp;
	int i;

	if (b == NULL)

		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')

			return (0);
	}
	for (rtp = 1, convno = 0, i--; i >= 0; i--, rtp *= 2)
	{
		if (b[i] == '1')

			convno += rtp;
	}

	return (convno);
}

