#include "lists.h"

/**
 * pop_listint - Deletes the head node of a type listint_t list
 * @head: Pointer of pointer to the list head
 * Return: (EXIT_SUCCESS) or head node's data
 *
 * Code by 0xOneBeing
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n_return;

	if (*head == NULL)
		return (EXIT_SUCCESS);

	temp = *head;
	n_return = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (n_return);
}
