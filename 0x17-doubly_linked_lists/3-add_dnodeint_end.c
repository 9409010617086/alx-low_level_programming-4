#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head node.
 * @n: Data for the new node
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node = malloc(sizeof(dlistint_t));
	dlistint_t *last_node = *head;

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL) {
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = end_node;
	end_node->prev = last_node;

	return (end_node);
}
