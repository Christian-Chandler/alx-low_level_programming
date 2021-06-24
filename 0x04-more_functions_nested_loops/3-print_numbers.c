#include "holberton.h"

/**
 * print_numbers - Prints from 0 to 9 followed by a new line
 */

void print_numbers(void)
{
	char z;

	for (z = '0'; z <= '9'; z++)
	{
		_putchar(z);
	}

	_putchar('\n');
}
