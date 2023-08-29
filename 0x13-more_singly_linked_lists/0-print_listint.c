#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints all the elements
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t j;

	for (j = 0; h; j++)
	{
	printf("%d\n", h->n);
	h = h->next;
	}
	return (j);
}
