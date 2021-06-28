#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: String
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	char str_length;

	for (str_length = 0; s != '\0'; s++)
		str_length++;
	return (str_length);
}
