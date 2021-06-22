#include "holberton.h"
/**
 * print_last_digit - Prints last digit of a number.
 * @n: Number to be checked.
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	n = (n % 10);

	_putchar(n + '0');

	return (n);

}
