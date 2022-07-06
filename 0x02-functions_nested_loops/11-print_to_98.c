#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - A function that prints all natural numbers from n to 98.
 * @n: An Integer parameter.
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}

			n--;
		}
	}

	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}

			n++;
		}
	}

	printf("\n");
}
