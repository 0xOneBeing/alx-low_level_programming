#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: Pointer of pointer to the list head
 * @index: Index at the node to be deleted
 * Return: 1 or -1
 *
 * Code by 0xOneBeing
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;

	current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head - (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
