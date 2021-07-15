#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *allocmem;

	allocmem = malloc(b);

	if (allocmem == NULL)
		exit(98);
	else
		return (allocmem);
}
