#include "main.h"

/**
 * print_most_numbers - function that prints numbers, except two and four.
 * Return: Void.
 */
void print_most_numbers(void)
{
	int i;
	char c;

	c = '0';

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + i);
		}
	}
	_putchar('\n');
}
