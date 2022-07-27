#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes it with a specific char.
 *
 * @size: An unsigned integer parameter.
 * @c: A char parameter.
 *
 * Return: NULL if size = 0, else a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	str = (char *)malloc(sizeof(char) * size);

	if (size = 0)
	{
		return (NULL);
	}

	*str = c;

	return (str);
}
