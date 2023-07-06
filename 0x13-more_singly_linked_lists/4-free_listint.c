#include "lists.h"

/**
 * free_listint - Frees a list of type listint_t
 * @head: Pointer to the list head
 *
 * Code by 0xOneBeing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
