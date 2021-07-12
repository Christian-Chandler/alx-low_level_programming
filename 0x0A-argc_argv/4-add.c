#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int count, num, sum = 0;

	for (count = 1; count < argc; count++)
	{
		for (num = 0; argv[count][num]; num++)
		{
			if (argv[count][num] < '0' || argv[count][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[count]);
	}

	printf("%d\n", sum);

	return (0);
}
