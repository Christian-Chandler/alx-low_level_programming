#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 * @s: String
 * Return: S.
 */
char *leet(char *s)
{
	char letter[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i, j, k;

	for (i = 0; letter[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (letter[i] == s[j])
				s[j] = num[k];
		}
		k++;
	}
	return (s);
}
