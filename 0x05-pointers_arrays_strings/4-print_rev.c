#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - Prints the reverse of a string
 * @s: string variable 's'
 */

void print_rev(char *s)
{
	int i, l, t;

	l = strlen(s);
	for (i = 0; i < l/2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l -i -1] = t;
	}
	getchar();
}
