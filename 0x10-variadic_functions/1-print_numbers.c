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
	int next_num;

	if (separator == NULL || n == 0)
		return;
	va_start(numbers, n);

	while (i < n)
	{
		if (i != n - 1)
		{
			next_num = va_arg(numbers, int);
			printf("%d%s", next_num, separator);
			i++;
		}
		else
		{
			next_num = va_arg(numbers, int);
			printf("%d", next_num);
			i++;
		}
	}
	va_end(numbers);
	printf("\n");
}
