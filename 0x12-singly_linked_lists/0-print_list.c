#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer having type list_t.
 * Return: size_t.
 */
size_t print_list(const list_t *h)
{   
    size_t i = 0;
    const list_t *temp = h;

    while (temp != NULL)
    {
        if (temp->str  == NULL)
        {
            printf("[0] (nil)\n");
            temp = temp->next;
            i++;
        }

        printf("[%u] %s\n", temp->len, temp->str);
        temp = temp->next;
        i++;
    }
    return (i);
}
