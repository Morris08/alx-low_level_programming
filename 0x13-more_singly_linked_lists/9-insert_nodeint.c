#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @idx: index of the list where the new node should be added
 * @head: double pointer to head of list
 * @n: value of inserted node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	if (idx == 0)
	{
	new->next = current;
	*head = new;
	return (*head);
	}
	while (idx > 1)
	{
	current = current->next;
	idx--;
	if (!current)
	{
	free(new);
	return (NULL);
	}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
