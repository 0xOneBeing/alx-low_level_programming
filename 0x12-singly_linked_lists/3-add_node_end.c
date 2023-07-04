#include "lists.h"
#include <string.h>

/**
* add_node_end - Adds a new node at the end
* of a linked list
* @head: A pointer the head of the linked list
* @str: The string to be added to the linked list
* Return: If the function fails - NULL
* Otherwise - the address of the new node
*
* Code by 0xOneBeing
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	int str_len;

	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);

	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	str_len = strlen(str);
	new_node->str = dup_str;
	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (*head);
}
