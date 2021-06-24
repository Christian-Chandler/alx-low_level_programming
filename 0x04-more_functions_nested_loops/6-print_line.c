#include "holberton.h"

/**
 * print_line - Prints line n times using _
 * @n: Number of _ to be printed
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}

	_putchar('_');
}
