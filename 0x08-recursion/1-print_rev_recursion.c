#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	char *p = ++s;

	if (*p != '\0')
		_print_rev_recursion(p);
	_putchar(*s);
}
