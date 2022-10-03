#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: Head node.
 * Return: sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sum_nodes = head;
	int summation = 0;

	while (sum_nodes != NULL)
	{
		summation += sum_nodes->n;
		sum_nodes = sum_nodes->next;
	}
	return (summation);
}
