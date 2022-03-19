#include "main.h"

/**
 * print_triangles - function that prints a trian
 * @size: An integer.
 * Return: void.
 */
void print_triangles(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1 - i; j++)
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
