#include "lists.h"
#include <stdlib.h>

/**
 * list_len - list length
 * @h: linked list
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
