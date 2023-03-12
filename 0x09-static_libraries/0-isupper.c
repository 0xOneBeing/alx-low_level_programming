#include "main.h"
/**
 * _isupper - This program checks for uppercase
 * @c: character to check
 *
 * Return: return 1 (true) if uppercase or 0 (false) if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
