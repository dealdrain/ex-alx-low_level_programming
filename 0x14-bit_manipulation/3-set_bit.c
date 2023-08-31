#include "main.h"

/**
 *  * set_bit - set value of a bit to 1
 *  * @n: decimal number to be passed
 *
 *  * @index: index to change
 *  * Return: 1 if successful, else -1
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	for (num = 1; index > 0; index--, num *= 2)
		;

	*n += num;

	return (1);
}

