#include <stdio.h>
/**
 * main - Prints the sizes of the various "types" in the computer
 *        which "this" will compile or run.
 * Return: Always 0.
 */
int main(void)
{
	printf("%s: %zu byte(s)\n", "Size of char", sizeof(char));
	printf("%s: %zu byte(s)\n", "Size of an int", sizeof(int));
	printf("%s: %zu byte(s)\n", "Size of a long int", sizeof(long int));
	printf("%s: %zu byte(s)\n", "Size of a long long int", sizeof(long long int));
	printf("%s: %zu byte(s)\n", "Size of a float", sizeof(float));

	return (0);
}
