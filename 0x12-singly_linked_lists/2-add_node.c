#include "lists.h"
#include <stdlib.h>
/**
 * _strlen - string length
 * @s: string to be evaluated
 * Return: size
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i], i++)
	;
	return (i);
}
/**
 * add_node - add new nodes to list
 * @head: current place in the list
 * @str: string to add
 * Return: pointer
 */ 
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *str_copy;
	list_t *new_node;

	if (str == NULL || head; == NULL)
	return (NULL);

	len = _strlen(str);
	new_node = *head;
	str_copy = malloc((len + 1) * sizeof(char));
	
	if (str_copy == NULL)
	return (NULL);
	for (i = 0; str[i]; i++)
	str_copy[i] = str[i];

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	free(str_copy);
	return (NULL);
	}

	new_node->str = str_copy;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
