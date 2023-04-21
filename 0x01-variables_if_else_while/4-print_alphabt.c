#include <stdio.h>

/**
  *main - print letters except q and e in lowercase.
  *
  * Return: Always 0.
  */
int main(void)
{
	char y;

		for (y = 'a'; y <= 'z'; y++)
		{
			if (y != 'e' && y != 'q')
				putchar(y);
		}

	putchar('\n');

	return (0);
}
