#include "main.h"

/**
 * print_triangles - function that prints a triangle, followed by a new line.
 * @n: An integer.
 * Return: Void.
 */
void print_triangles(int n)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
