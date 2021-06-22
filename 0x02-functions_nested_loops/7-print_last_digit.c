#include "holberton.h"
/**
 * print_last_digit - Prints last digit of a number.
 * @n: Number to be checked.
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int num;

	n = (num % 10);

	write(1, n, 1);

	return (n);

}
