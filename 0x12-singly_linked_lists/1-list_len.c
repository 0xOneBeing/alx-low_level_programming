#include "lists.h"

/**
 * list_len - Returns number of elements in a linked list
 * @h: Pointer to the list head
 * Return: Number of elements in a linked list
 *
 * Code by 0xOneBeing
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
