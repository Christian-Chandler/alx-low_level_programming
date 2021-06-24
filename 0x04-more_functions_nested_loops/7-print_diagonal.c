#include "holberton.h"

/**
 * print_diagonal - Prints diagonal line n times using \
 * @n: number of \ to be printed.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');

			int j;

			for (j = 0; j <= i; j++)
				_putchar(' ');

		}
	}

	_putchar('\n');
}
