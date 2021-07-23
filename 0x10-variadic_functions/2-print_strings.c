#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @n:the number of strings passed to the function
 * @separator:the string to be printed between the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *str;

	va_start(strings, n);

	while (i < n)
	{
		if (separator != NULL)
		{
			str = va_arg(strings, char *);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		else
		{
			str = va_arg(strings, char *);
			printf("%s", str);
		}
		i++;
	}
	printf("\n");
}
