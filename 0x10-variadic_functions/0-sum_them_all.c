#include "stdarg.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: Number of parameters
 * @...: Optional parameters.
 * Return: ) if no parameters are passed otherwise sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(numbers, n);

	while (i < n)
	{
		sum += va_arg(numbers, int);
		i++;
	}
	return (sum);
}
