#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: pointer to print name fxn
 *
 * Code by 0xOneBeing
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
