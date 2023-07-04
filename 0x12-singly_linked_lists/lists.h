#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Singly linked list structure
 * @str: string - malloc string
 * @len: Length of the data  string
 * @next: Pointer  to the next nodet
 *
 * Code by 0xOneBeing
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
