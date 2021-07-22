#include "function_pointers.h"

/**
 * print_name -  prints a name.
 * @name: Name to be printed.
 * @f: the fxn the name is to be printed with.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
