#include "holberton.h"
/**
 * print_alphabet_x10 - Prints the alphabets in lower case x10 followed
 *                  by a new line.
 *
 * Return: Ommitted because of 'void'.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	}
}
