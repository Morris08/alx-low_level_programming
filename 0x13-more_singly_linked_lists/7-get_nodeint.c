#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a linked list
 * @head: head of list
 * @index: the index of the node, starting at 0
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	j = 0;
	while (j < index)
	{
	if (head->next == NULL)
	return (NULL);
	head = head->next;
	j++;
	}
	return (head);
}
