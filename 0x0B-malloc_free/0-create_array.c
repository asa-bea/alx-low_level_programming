#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * Description - creates an array of chars and initializes it with a
 * specific char.
 * @size: the size of the array
 * @c: char type
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
		return (NULL);


	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;

	return (array);
}