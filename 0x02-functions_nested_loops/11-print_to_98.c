#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int y)
{
	if (y >= 98)
	{
		while (y > 98)
			printf("%d, ", y--);
		printf("%d\n", y);
	}

	else
	{
		while (y < 98)
			printf("%d, ", y++);
		printf("%d\n", y);
	}
}
