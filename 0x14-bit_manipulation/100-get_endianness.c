#include "main.h"

/**
 * *get_endianness - check endianness
 *
 * * Return: 0 if large, otherwise 1
 **/

int get_endianness(void)
{
	int x = 1;

	if (*(char *)&x == 1)

		return (1);
	else
		return (0);
}

