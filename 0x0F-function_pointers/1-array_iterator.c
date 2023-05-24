#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - Function Entry Point
  * Description - 'This function executes a function given as
  * a parameter on each element in an array'
  * @array: array to be iterated
  * @size: size of the array
  * @action: function pointer
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)

	{
		action(array[a]);
	}
}
