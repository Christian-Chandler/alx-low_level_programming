#include "holberton.h"
/**
 * swap_int - swaps two integers.
 * @a: 1st Pointer variable.
 * @b: 2nd pointer
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
