/*
   * File: 101-quote.c
   * Auth: Akosus Asabea Obese
   */

#include <unistd.h>

/**
  * main - prints and an excerpt from a book.
  *
  * Return: Always 1
  */
int main(void)
{
	write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			59);

	return (1);
}
