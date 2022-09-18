#include "main.h"
/**
 * print_alphabet - This prints the letters of the alphabet in lowercase
 * Return: returns 0 if successful
 */

void  print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
