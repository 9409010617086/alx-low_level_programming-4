#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: An unsigned int parameter.
 *
 * Return: Status value of 98 if it fails,
 * else a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
		exit (98);

	return (str);
}
