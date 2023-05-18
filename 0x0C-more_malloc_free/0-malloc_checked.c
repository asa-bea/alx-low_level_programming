#include "main.h"

/**
 * malloc_checked - cause normal process termination with a status value of 98
 * Description - 'a function allocating memory with malloc'
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);

}
