#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars, 
 * and initializes it with a specific char.
 * @size: An unsigned integer parameter.
 * @c: A char parameter.
 *
 * Return: NULL if size = 0, else a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = (char *)malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
