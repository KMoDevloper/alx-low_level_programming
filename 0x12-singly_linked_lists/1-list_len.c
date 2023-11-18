#include <stddef.h>
#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
