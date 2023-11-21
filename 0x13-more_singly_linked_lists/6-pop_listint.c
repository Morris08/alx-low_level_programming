#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head node
 * @head: double pointer to head of list
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int j;
	listint_t *current, *temp;

	if (head == NULL)
	return (0);
	temp = current = *head;
	if (*head)
	{
	j = current->n;
	*head = current->next;
	free(temp);
	}
	else
	j = 0;
	return (j);
}
