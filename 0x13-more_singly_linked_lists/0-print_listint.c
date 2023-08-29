#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t j;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	j++;
	}
	return (j);
}
