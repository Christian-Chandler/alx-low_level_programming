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

	if (s1[i] == '\0' && s2[j] != '\0')
	{
		j++;
		return (i - j);
	}
	else if (s1[i] != '\0' && s2[j] == '\0')
	{
		i++;
		return (i - j);
	}
	else if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (0);
	}
	else
	{
		do {
			i++;
			j++;
		} while (s1[i] != '\0' && s2[j] != '\0');

	if (s1[i] == '\0' && s2[j] != '\0')
	{
		j++;
		return (i - j);
	}
	else if (s1[i] != '\0' && s2[j] == '\0')
	{
		i++;
		return (i - j);
	}
	else
		return (0);
	}
}
