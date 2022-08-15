#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Function that frees a list_t list.
 * @head: Head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
