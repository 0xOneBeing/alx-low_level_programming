#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 * of a linked list
 * @head: Pointer to the list head
 * @str: The string to be added to the linked list
 * Return: If the function fails - NULL
 * Otherwise - the address of the new node
 *
 * Code by 0xOneBeing
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *string_copy;
	unsigned int string_len;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	str_copy = strdup(str);
	if (string_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	string_len = strlen(str);
	new_node->str = string_copy;
	new_node->len = string_len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
