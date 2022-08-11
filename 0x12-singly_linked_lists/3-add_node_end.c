#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Counts the number of characters of str.
 * @str: Pointer of char.
 * Return: unsigned int.
 */
unsigned int _strlen(const char *str)
{
    unsigned int i = 0;

    while (str[i] != '\0')
        i++;

    return (i);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Head of the linked list.
 * @str: String.
 * Return: list_t*.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    /* Create space for new node. */
    list_t *new_node = (list_t *) malloc(sizeof(list_t));
    char *str_new = strdup(str); /* Copy string */
    list_t *last = *head;

    if (new_node == NULL)
        return (NULL);

    new_node->str = str_new;
    new_node->len = _strlen(str);

    /* If the linked list is empty */
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        /* Traverse the linked list to get the last node */
        while (last->next != NULL)
            last = last->next;
        /* last node point to the new node */
        last->next = new_node;
    }
    return (new_node);
}
