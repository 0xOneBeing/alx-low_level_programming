#include "lists.h"

/**
 * sum_listint - Computes the sum of all data in a type listint_t list
 * @head: Pointer to the list head
 * Return: 0 or sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
