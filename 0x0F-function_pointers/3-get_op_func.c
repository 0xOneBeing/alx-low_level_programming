#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - gets the operation selected by the user
 * @s: the operator argument
 * Return: pointer to the appropriate fxn passed as parameter
 *
 * Code by 0xOneBeing
 */

int (*get_op_func(char *s))(int, int)
{
	op_t opa[] = {
		{"+", op_add},
		{"=", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL. NULL}
	};
	int i;

	i = 0;

	while (opa[i].op != NULL && *(opa[i].op) != *s)
		i++;

	return (opa[i].f);
}
