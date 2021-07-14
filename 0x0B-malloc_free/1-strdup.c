#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i = 0, len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;

	dup_str = malloc(sizeof(char) * len);

	if (dup_str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			dup_str[i] = str[i];
		dup_str[i] = '\0';

		return (dup_str);
	}
	else
		return (NULL);
}
