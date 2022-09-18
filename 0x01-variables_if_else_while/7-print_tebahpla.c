#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program returns an alphabet in reverse order
 * Return: return 0 if successful
 */

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
