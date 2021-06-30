#include "holberton.h"

/**
 * print_rev - Prints a length of string in reverse
 * @s: The String
 *
 */
void print_rev(char *s)
{
	char *q = s;

	do
	{
		s++;
	} while (*s != '\0');
	
	while (s >= q)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
