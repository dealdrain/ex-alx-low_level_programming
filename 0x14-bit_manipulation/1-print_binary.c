#include "main.h"

/**
 *  * print_binary - prints the binary rep of a num
 *  *
 *  * @n: int
 *  * Return: void always
 **/

void print_binary(unsigned long int n)
{
	int i;
	int x;
	unsigned long int a;

	i = 0;

	for (x = 63; x >= 0; x--)
	{
		a = (n >> x) & 1;
		if (a == 1)
			i = 1;
		if (i == 1)
			_putchar(((n >> x) & 1) + '0');
	}
	if (n == 0)

		_putchar('0');
}

