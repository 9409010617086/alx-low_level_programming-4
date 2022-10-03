#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head.
 * @idx: The index of the list where the new node should be added.
 * @n: Data of the new node.
 * Return: he address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *nth_node = *h;
	unsigned int count = 1;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	while (count < idx)
	{
		nth_node = nth_node->next;
		count++;
	}
	new_node->next = nth_node->next;
	nth_node->next = new_node;
	new_node->prev = nth_node;

	return (new_node);
}
