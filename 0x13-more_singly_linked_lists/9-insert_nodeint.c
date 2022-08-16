#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to singly list head.
 * @idx: Index where the new node is to be inserted.
 * @n: Integer to be contained bu the new node.
 * Return: listint_t.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *prev_node, *new_node, *next_node;
        unsigned int i = 0;

        new_node = malloc(sizeof(listint_t));
        prev_node = *head;
        next_node = *head;
        new_node->n = n;

        while (i < idx - 1)
        {
                prev_node = prev_node->next;
                next_node = next_node->next;
                i++;
        }
        next_node = next_node->next;
        prev_node->next = new_node;
        new_node->next = next_node;

        if (new_node == NULL)
                return (NULL);
        return (new_node);
}
