 #include "holberton.h"

/**
 * _strncpy - copies a string to another.
 * @dest: Points to address of destination string.
 * @src: points to address of source string.
 * @n: number of strings from second string to be copied.
 * Return: Pointer to destination string 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
