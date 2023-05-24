#include "function_pointers.h"

/**
  * int_index - Entry point
  * Description - 'a function that searches for an integer'
  * @array: array of elements to be searched
  * @size: size of the array
  * @cmp: function pointer
  * Return:index of the first element for which the cmp function does not
  * retun 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
