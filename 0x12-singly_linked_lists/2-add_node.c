#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add new nodes to list
 * @head: current place
 * @str: string
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL || head; == NULL)
	return (NULL);

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node = NULL)
	return (NULL);

	char *str_copy = strdup(str);
	if (str_copy == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->str = str_copy;
	new_node->len = strlen(str_copy);
	new_nodep->next = *head;
	*head = new_node;

	return (new_node);
}
