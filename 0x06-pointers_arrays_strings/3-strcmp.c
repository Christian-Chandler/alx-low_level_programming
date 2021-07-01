#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: Points to 1st string
 * @s2: Points to second string
 *
 * Return: -15 if less, 0 if equal or 15 if greater
 */
int _strcmp(char *s1, char *s2)
{
	int i = 1;
	int j = 1;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (i < j && i >= 1)
		return (-15);
	else if (i > j && i>= 1)
		return (15);
	else
		return (0);
}
