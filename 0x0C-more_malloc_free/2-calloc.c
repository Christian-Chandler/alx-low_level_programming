#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *copy_array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	copy_array = malloc(size * nmemb);

	if (copy_array == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		copy_array[i] = '\0';
	return (copy_array);

	return (NULL);
}
