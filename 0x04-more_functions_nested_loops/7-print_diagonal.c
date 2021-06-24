#include "holberton.h"

/**
 * print_diagonal - Prints diagonal line n times using \
 * @n: Number of \ to be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = n;

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
