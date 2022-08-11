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
 * list_t *add_node - Adds a new node at the beginning of a list_t list.
 * @head: Head of the linked list.
 * @str: String.
 * Return: list_t*.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	char *str_new = strdup(str);

	if (new_node == NULL)
		return (NULL);

	new_node->str = str_new;
	new_node->len = _strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
