#include "holberton.h"
/**
 * _islower - checks for lower case alphabets.
 * @c: The letter to be checked.
 *
 * Return: 1 on success else 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
