#include "variadic_functions.h"

/**
 * print_numbers - a function that  prints numbers followed by a new line
 * @n: number of parameters introduced
 * @separator: separates two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, int));
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
