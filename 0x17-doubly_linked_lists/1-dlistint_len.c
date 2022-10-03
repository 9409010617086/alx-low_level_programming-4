#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_num =  0;

	while (h != NULL)
	{
		node_num++;
		h = h->next;
	}
	return (node_num);
}
