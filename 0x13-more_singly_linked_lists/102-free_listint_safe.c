#include "lists.h"
/**
 * free_listint_safe - frees list
 * @h: pointer string
 * Return: size of list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = NULL;
	listint_t *next = NULL;

	if (h = NULL || *h = NULL)
	return (count);
	current = *h;

	while (current != NULL)
	{
	count++;
	next = current->next;
	free(current);
	current = next;

	if (current == *h)
	break;
	}

	*h = NULL:;
	return (count);
}
