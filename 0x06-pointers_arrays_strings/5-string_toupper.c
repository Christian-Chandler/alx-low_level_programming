#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: type of argument received
 * Return: Uppercase string
 */
char *string_toupper(char *s)
{
	int a, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			a = s[i] - 32;
			s[i] = (char)a;
		}
	}

	return (s);
}
