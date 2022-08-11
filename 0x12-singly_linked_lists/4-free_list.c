#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: Head of the linked list.
 */
void free_list(list_t *head)
{
    list_t *tmp;

    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
