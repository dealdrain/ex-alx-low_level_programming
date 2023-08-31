#include "main.h"

/**
 *  * flip_bits - returns the number of bits to flip number to another
 *  * @n: int 1
 *  * @m: int 2
 *
 *  * Return: number of bits
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int all = 0;
	unsigned long int bitman;

	bitman = n ^ m;

	while (bitman)
	{
		all += bitman & 1;
		bitman = bitman >> 1;
	}

	return (all);
}

