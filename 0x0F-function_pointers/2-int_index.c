#include "function_pointers.h"

/**
 * array_iterator - Function that searches for an integer.
 * @array: An array of integers.
 * @size: number of elements in the array 
 * @cmp:pointer to the function to be used to compare values.
 *
 * Return: The index where the cmp returns a value.
 * Otherwise: -1 if size <= 0, or there is no match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
