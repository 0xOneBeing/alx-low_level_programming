#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node to list at given position
 * @head: Pointer of pointer to the list head
 * @idx: Index of list where new node would be added
 * @n: Integer variable for new node
 * Return: NULL or address of new node
 *
 * Code by 0xOneBeing
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	current = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);

		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
