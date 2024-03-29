#include <stdlib.h>
#include "main.h"

int length(char *str);
int word_count(char *str);

/**
 * strtow - splits a string into words
 * @str: the string to be splitted
 * Return: pointer to the array of splitted words
 *
 * Code by 0xOneBeing
 */

char **strtow(char *str)
{
	char **split;
	int i, j = 0, temp = 0, size = 0, words = word_count(str);

	if (words == 0)
		return (NULL);

	split = (char **) malloc((words + 1) * sizeof(char *));

	if (split != NULL)
	{
		for (i = 0; i <= length(str) && words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;

			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' ''))
			{
				split[j] = (char *) malloc(sizeof(char) * size + 1);

				if (split[j] != NULL)
				{
					while (temp < size)
					{
						split[j][temp] = str[(i - size) + temp];
						temp++;
					}
					split[j][temp] = '\0';
					size = temp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(split[j]);

					free(split);

					return (NULL);
				}
			}
		}
		split[words] = NULL;

		return (split);
	}
	else
		return (NULL);
}

/**
 * length - returns the length of str
 * @str: string to calculate its length
 * Return: length of the string 'str'
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

/**
 * word_count - counts the number of words in a string
 * @str: string to have its words counted
 * Return: number of words
 *
 * Code by 0xOneBeing
 */

int word_count(char *str)
{
	int i = 0, words = 0;

	while (i <= length(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
			i++;
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			word += 1;
			i++;
		}
		else
			i++;
	}

	return (words);
}
