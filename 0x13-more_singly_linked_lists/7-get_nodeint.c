#include "lists.h"

/**
 * get_nodeint_at_index - Finds a given node of listint_t list.
 * @head: Pointer to the head of the listint_t list.
 * @index: The index of the node
 * Return: NULL or the located node if otherwise.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}

	return (head);
}
