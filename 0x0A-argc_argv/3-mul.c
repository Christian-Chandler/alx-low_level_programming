#include <stdio.h>
#include <stdlib.h>
/**
 * main - that multiplies two numbers, followed by a new line
 * @argc: Argument count.
 * @argv: Argument vector(array)
 * Return: 0 if the program receives two arguments else 1.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int n, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);

	printf("%d\n", m * n);
	return (0);
}
