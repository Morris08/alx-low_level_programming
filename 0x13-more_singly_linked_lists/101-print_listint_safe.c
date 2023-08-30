#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - print linked list
 * @head: pointer to head of list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *one = head, *two = head;

	if (head == NULL)
	exit(98);

	while (one && two && two->next && head)
	{
	one = one->next;
	two = two->next->next;
	nodes++;
	}
	head = NULL;
	return (nodes);
}
