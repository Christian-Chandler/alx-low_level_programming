#include "holberton.h"

/**
 * _puts - Prints a length of string
 * @str: The String
 *
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
