#include "holberton.h"

/**
 * print_numbers - Prints from 0 to 9 followed by a new line
 */

void print_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		_putchar((z % 10) + '0');
	}

	_putchar('\n');
}
