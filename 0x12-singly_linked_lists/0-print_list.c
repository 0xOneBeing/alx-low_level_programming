#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints the elelments of a list
 * @h: Pointer to list head
 * Return: list nodes
 *
 * Code by 0xOneBeing
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
