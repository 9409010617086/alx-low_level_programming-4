#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to listint_t.
 *
 * Return: size_t.
 */
size_t print_listint(const listint_t *h)
{
        size_t i = 0;

        while (h != NULL)
        {
                i++;
                printf("%d\n", h->n);
                h = h->next;
        }
        return (i);
}
