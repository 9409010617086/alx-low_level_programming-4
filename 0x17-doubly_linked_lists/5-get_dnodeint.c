#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head:
 * @index:
 * Return: The nth node of a dlistint_t linked list, else NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node = head;
	unsigned int count = 0;

	if (nth_node == NULL)
		return (NULL);

	while (count < index)
	{
		nth_node = nth_node->next;
		count++;
	}
	return (nth_node);
}
