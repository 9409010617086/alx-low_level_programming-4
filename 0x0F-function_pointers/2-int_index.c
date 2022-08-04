#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array: An array of integers.
 * @size: Number of elements in the array 
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: The index where the cmp returns a value.
 * Otherwise: -1 if size <= 0, or there is no match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 && size && cmp)
	{

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
