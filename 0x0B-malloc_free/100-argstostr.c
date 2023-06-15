#include <stdlib.h>
#include "main.h"

int length(char *str);

/**
 * argstostr - concatenates all args of your program
 * @ac: argument code
 * @av: argument vector
 * Return: pointer to the concatenated arguments string
 *
 * Code by 0xOneBeing
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int j = 0, k = 0, sum = 0, temp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		sum += (length(av[ac]) + 1);

	str = (char *) malloc(sum + 1);

	if (str != NULL)
	{
		while (k < ac)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				str[j + temp] = av[k][j];

			str[temp + j] = '\n';
			temp += (j + 1);
			k++;
		}
		str[temp] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (str);
}

/**
 * length - returns the length of a string
 * @str: the string to calculate its length
 * Return: the length of str
 *
 * Code by 0xOneBeing
 */

int length(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}

	return (len);
}
