#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat_str;
	unsigned int i, j, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1) + strlen(s2) + 1;

	cat_str = malloc(sizeof(char) * len);

	if (cat_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		cat_str[i] = s1[i];
	}
	if (n >= sizeof(s2))
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			cat_str[i] = s2[j];
			i++;
		}
		cat_str[i] = '\0';
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			cat_str[i] = s2[j];
			i++;
		}
		cat_str[i] = '\0';
	}
	return (cat_str);
}
