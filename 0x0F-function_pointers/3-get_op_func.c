#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Entry point
 * @s: the operator passed as argument given by the user
 *
 * Return: a pointer to the func which corresponds to the operator given as
 * a parameter, or NULL if s does not match any of expected operators
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (0);
}
