#include <stdio.h>

/**
  *main - print letters in lowercase
  *
  * Return: Always 0.
  */
int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
		putchar(y);

	putchar('\n');

	return (0);
}
