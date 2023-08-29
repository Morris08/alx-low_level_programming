#include "lists.h"
/**
 * sum_listint - sum of all data of a linked lis
 * @head: pointer to head of list
 * Return: 0 if list is empty or sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
	;
	return (sum);
}
