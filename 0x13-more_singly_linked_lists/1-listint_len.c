#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to listint_t.
 *
 * Return: size_t.
 */
size_t listint_len(const listint_t *h)
{
        size_t i = 0;

        while (h != NULL)
        {
                i++;
                h = h->next;
        }
        return (i);
}
