 #include "holberton.h"

/**
 * _strncat - concatenates two strings.
 * @dest: Points to address of destination string.
 * @src: points to address of source string.
 * @n: number of strings from second string.
 * Return: Pointer to destination string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, index = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		index++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[index] = src[i];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
