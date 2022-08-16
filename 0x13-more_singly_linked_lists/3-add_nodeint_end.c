#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to singly list head.
 * @n: Const integer for the new node.
 * Return: size_t.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
        listint_t *last_node;

        last_node = *head;
        new_node->n = n;

        if (new_node == NULL)
                return (NULL);

        if (*head == NULL)
                *head = new_node;

        else
        {
                while (last_node->next != NULL)
                        last_node = last_node->next;

                last_node->next = new_node;
        }
        new_node->next = NULL;
        return (new_node);
}
