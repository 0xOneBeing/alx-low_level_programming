#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees up a mem alloc used for linked list
 * @head: Pointer to he first node of the list
 *
 * Code by 0xOneBeing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
