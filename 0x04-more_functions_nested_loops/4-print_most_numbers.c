#include "holberton.h"

/**
 * print_most_numbers - Prints from 0 to 9 except 2 and 4 ff
 *                      by a new line
 */

void print_most_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		if (z != 2 && z != 4)

		_putchar((z % 10) + '0');
	}

	_putchar('\n');
}
