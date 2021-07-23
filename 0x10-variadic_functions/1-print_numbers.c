#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @n:the number of integers passed to the function
 * @separator:the string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;

	if (separator == NULL || n == 0)
		return;
	va_start(numbers, n);

	while (i < n)
	{
		printf("%d", va_arg(numbers, int));

		if (i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
}
