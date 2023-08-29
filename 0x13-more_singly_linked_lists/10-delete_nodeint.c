#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: double pointer to head of list
 * @index: index of the node that should be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *sub;

	if (!head || !*head)
	return (-1);
	current = *head;
	if (index == 0)
	{
	*head = (*head)->next;
	free(current);
	return (-1);
	}
	for (i = 0; i < (index - 1); i++)
	{
	current = current->next;
	if (current == NULL)
	return (-1);
	}
	sub = current->next;
	current->next = sub->next;
	free(sub);
	return (1);
}	
