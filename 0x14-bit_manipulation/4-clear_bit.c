#include "main.h"

/**
 *  * clear_bit - set value of a bit
 *  * @n: int
 *
 *  * @index: index to set 1
 *  * Return: int 1 for success, otherwise
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index >= (sizeof(*n) * 8))

		return (-1);
	num = 1;
	num = num << index;
	num = ~num;
	*n = *n & num;

	return (1);
}

