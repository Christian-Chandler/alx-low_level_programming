#include <stdio.h>

/**
 * main - prints number of arguments passed into it, followed by a new line
 * @argc: Argument count.
 * @argv: Argument vector(array)
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
