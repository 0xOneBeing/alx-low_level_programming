#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index
 *                           of listint_t list.
 * @head: Pointer to the address of head of listint_t list.
 * @index: The index of the node to be deleted.
 * Return: (1) or (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
		{
			return (-1);
		}

		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
