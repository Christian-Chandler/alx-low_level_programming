#include "holberton.h"

/**
 * print_rev - Prints a length of string in reverse
 * @s: The String
 *
 */
void print_rev(char *s)
{
	int  index, length = 0;

	while (s[index++])
		length++;

	for (index = length - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
