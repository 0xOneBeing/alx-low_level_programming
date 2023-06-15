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
	int i, j = 0, sum, temp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		sum += (length(av[ac]) + 1);

	str = (char *) malloc(sum + 1);

	if (str != NULL)
	{
		while (j < ac)
		{
			for (i = 0; av[j][i] != '\0'; i++)
				str[i + temp] = av[j][i];

			str[i + temp] = '\n';
			temp += (i + 1);
			j++;
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
