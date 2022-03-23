#include "main.h"
#include <string.h>
/**
 * print_array - function that prints n elements of an array of integers.
 * @a: Pointer parameter.
 * @n: Integer parameter.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n -1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
