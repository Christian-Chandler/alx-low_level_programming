#include "holberton.h"

/**
 * _isdigit - Checks for digit from 0 to 9
 * @c: Character to be checked
 * Return: 1 for success, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
