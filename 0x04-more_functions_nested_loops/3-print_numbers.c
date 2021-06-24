#include "holberton.h"

/**
 * print_numbers - Prints from 0 - 9 followed by a new line
 */

void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		_putchar((i) + '0');
	}

	_putchar('\n');

	return (0);
}
