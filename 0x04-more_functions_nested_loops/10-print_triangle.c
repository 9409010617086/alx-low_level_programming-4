#include "main.h"

/**
 * print_triangle - function that prints a triangle.
 * @size: An integer parameter.
 * Return: void.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (k = size - 1; k > i; k--)
			_putchar(' ');

		for (j = 0; j < i + 1; j++)
			_putchar('#');

		_putchar('\n');
	}
}
