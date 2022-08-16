#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a linked list.
 * @head: Pointer to singly list head.
 * Return: int.
 */
int sum_listint(listint_t *head)
{
        listint_t *temp = malloc(sizeof(listint_t));
        int summation = 0;

        temp = head;

        while (temp)
        {
                summation += temp->n;
                temp = temp->next;
        }
        return (summation);
}
