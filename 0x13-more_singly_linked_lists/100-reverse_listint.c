#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to singly list head.
 * Return: listint_t.
 */
listint_t *reverse_listint(listint_t **head)
{
        listint_t *new_node = NULL;
        listint_t *temp = NULL;

        while (*head)
        {
                temp = *head; /*temp pt to the 1st node of the current list*/
                *head = (*head)->next;

                /* Insert temp at the front of the reversed list. */
                temp->next = new_node;
                new_node = temp;
        }
        *head = new_node;

        return (new_node);
}
