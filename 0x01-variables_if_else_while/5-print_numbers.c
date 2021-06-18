#include <stdio.h>

/**
 * main-Prints single digit numbers from 0 - 9
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
