#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @size: An unsigned int parameter.
 * @nmemeb: An unsigned int parameter.
 *
 * Return: A pointer to the allocated memory,
 * NULL if nmemb or size = NULL,
 * NULL if function fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call_oc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	call_oc = malloc(nmemb * size);

	if (call_oc == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		call_oc[i] = '\0';

	return ((void *)call_oc);
}
