#include <unistd.h>
/**
 * main - Prints a string using the "write" function defined in
 *        the UNIX standard libraries.
 *
 * Return: Always 1 to indicate success.
 */
int main(void)
{
	write(1,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
