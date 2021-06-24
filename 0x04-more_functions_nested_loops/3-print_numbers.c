#include "holberton.h"

/**
 * print_numbers - Prints from 0 - 9 followed by a new line
 */

void print_numbers(void)
{
	int number = 0;

	while (number <= 9)
	{
		_putchar((number) + '0');

		i++;
	}

	_putchar('\n');
}
