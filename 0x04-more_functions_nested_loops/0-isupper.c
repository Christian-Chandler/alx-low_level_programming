#include "holberton.h"

/**
 * _isupper - Checks for upper case alphabets
 * Return: 1 for success, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
