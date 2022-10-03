#include <stdio.h>
#include "lists.h"

/**
 *  print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Head of node.
 * Return: size_t.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_num =  0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_num++;
		h = h->next;
	}
	return (node_num);
}
