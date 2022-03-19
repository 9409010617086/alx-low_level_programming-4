#include "main.h"

/**
 * print_triangles - function that prints a trian
 * @size: An integer.
 * Return: void.
 */
void print_triangles(int size)
{
	int i, j, k;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				putchar(' ');
			}
			for (k = 0; k < i + 1; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
