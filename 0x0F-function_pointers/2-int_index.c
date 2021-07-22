#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: Array to be searched
 * @size: size of array.
 * @cmp: comparison to be made.
 * Return: Index of search for success or -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
