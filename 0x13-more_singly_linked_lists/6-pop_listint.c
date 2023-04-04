#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to the address of the head of listint_t list.
 * Return: (0) or the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int reTurn;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	reTurn = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (reTurn);
}
