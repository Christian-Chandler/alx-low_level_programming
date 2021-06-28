#include "holberton.h"

/**
 * print_rev - Prints a length of string in reverse
 * @s: The String
 *
 */
void print_rev(char *s)
{
	for (*s = '\0';; s--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
