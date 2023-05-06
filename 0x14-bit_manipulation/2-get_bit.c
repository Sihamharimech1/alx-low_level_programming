#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int found_one = 0;

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			found_one = 1;
			_putchar('1');
		}
		else if (found_one)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	if (!found_one)
		_putchar('0');
}
