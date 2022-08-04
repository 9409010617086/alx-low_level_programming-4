#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function as parameter on elements of an array.
 * @array: An array of integers.
 * @size: No of items in array.
 * @action: Pointer to function parameter.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
