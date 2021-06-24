#include "holberton.h"

/**
 * print_numbers - Prints from 0 - 9 followed by a new line
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i);

		i++;
	}

	_putchar('\n');
}
