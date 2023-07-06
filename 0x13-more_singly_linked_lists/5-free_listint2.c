#include "lists.h"

/**
 * free_listint2 - Frees a list of typoe listint_t
 * @head: Pointer of pointer to the list head
 *
 * Code by 0xOneBeing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
