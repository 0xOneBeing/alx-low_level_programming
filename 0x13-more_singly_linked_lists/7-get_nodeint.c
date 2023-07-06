#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given of a listint_t list
 * @head: Pointer to the head of the listint_t list
 * @index: The index of the node to locate
 * Return: NULL or the located node at (index)
 *
 * Code by 0xOneBeing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
