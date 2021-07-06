#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest: points to destination memory.
 * @src: Points to source memory.
 * @n: number of bytes to be copied.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
