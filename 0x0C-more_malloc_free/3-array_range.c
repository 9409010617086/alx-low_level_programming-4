#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: An integer parameter.
 * @max: An integer parameter.
 *
 * Return: If min > max, or function fails, return NULL;
 * else a pointer to the new array is returned.
 */

int *array_range(int min, int max)
{
	int *arrange;
	int i;

	if (min > max)
		return (NULL);

	arrange = (int *)malloc(sizeof(int) * (max + 1 - min));

	if (arrange == NULL)
		return (NULL);

	for (i = 0; i < (max + 1 - min); i++)
		arrange[i] = min + i;

	return (arrange);
}
