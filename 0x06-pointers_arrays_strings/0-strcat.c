 #include "holberton.h"

/**
 * _strcat - concatenates two strings.
 * @dest: Points to address of destination string.
 * @src: points to address of source string.
 *
 * Return: Pointer to destination string 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int i, index = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		index++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[index] = src[i];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
