#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to singly list head.
 * @index: Index whose node would be returned.
 * Return: int.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        listint_t *temp;
        unsigned int i = 0;

        temp = head;
        while (i < index)
        {
                temp = temp->next;
                i++;
        }
        return (temp);
}
