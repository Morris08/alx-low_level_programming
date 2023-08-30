#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint -  adds a new node at the beginning of a list
 * @head: beginning
 * @n: int to add
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
	return (NULL);
	(*head)->n = n;
	(*head)->next = new;
	return (*head);
}
