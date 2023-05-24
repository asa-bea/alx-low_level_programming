#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Entry point
 * Desc - 'function that selects the correct function
 * to perform the operation asked by the user'
 * @s: the operator passed as argument given by the user
 *
 * Return : --
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int h = 0;

	while (ops[h].op != NULL && *(ops[h].op) != *s)
		h++;
	return (ops[h].f);
}
