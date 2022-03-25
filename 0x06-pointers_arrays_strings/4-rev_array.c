#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: Pointer parameter.
 * @n: Integer parameter.
 * Return: An integer.
 * NOT  COMPLETE.
 */
void reverse_array(int *a, int n)
{
	int i, j;
	
	j = 0;
	i = n/2;
	
	while (i > 0)
	{
		a[j] = a[i];
		j++;
		i--;
	}
}
