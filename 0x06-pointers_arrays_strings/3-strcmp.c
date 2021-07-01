#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: Points to 1st string
 * @s2: Points to second string
 *
 * Return: -1 if less, 0 if equal or 1 if greater
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (i < j)
		return (-1);
	else if (i == j)
		return (0);
	else
		return (1);
}
