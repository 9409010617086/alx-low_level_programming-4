#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: Pointer to singly list head.
 * Return: int.
 */
int pop_listint(listint_t **head)
{
        listint_t *temp = malloc(sizeof(listint_t));
        int node_data;

        if (*head == NULL)
                return (0);

        temp = *head;
        node_data = temp->n;
        *head = temp->next;
        free(temp);

        return (node_data);
}
