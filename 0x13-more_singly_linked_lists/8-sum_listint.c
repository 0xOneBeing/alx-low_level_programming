#include "lists.h"

/**
 * sum_listint - Sums up all the data (n) of listint_t list.
 * @head: Pointer to the head of the listint_t list.
 * Return: (0) or sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sumOfData = 0;

	while (head)
	{
		sumOfData += head->n;
		head = head->next;
	}

	return (sumOfData);
}
