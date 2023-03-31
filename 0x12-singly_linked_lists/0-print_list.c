#include <stdio.h>
#include "lists.h"

/**
 * print_list - Fxn that prints all elements of a list
 * @h: param list
 * Return: elements of a list
 */

size_t print_list(const list_t *h)
{
	size_t element;

	element = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			A
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		element++;
	}
	return (element);
}
