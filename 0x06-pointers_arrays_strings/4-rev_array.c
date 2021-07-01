#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: Array
 * @n: Number of array elements.
 */
void reverse_array(int *a, int n)
{
	int b, i, j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[j];
		a[j] = b;
		j--;
	}
}
