#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the start of a listint_t list.
 * @head: Pointer to singly list head.
 * @n: Const integer for the new node.
 * Return: size_t.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

        if (new_node == NULL)
                return (NULL);

        new_node->n = n;
        new_node->next = *head;

        *head = new_node;

        return (new_node);
}
