#include "function_pointers.h"

/**
  * int_index - Entry point
  * @array - array of elements to be searched
  * @size - size of the array
  * @cmp - function pointer
  *
  * Return: index of the first element
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);

		a++;
			}
		}
	}

	return (-1);
}
