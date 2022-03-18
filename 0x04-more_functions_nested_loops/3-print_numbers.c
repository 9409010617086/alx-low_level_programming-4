#include "main.h"

/**
 * print_numbers - function that prints the numbers followed by a new line.
 * 
 * Return: Void.
 */
void print_numbers(void)
{
	int i;
	char c;

	c = '0';

	for (i = 0; i < 10; i++)
	{
		_putchar(c + i);
	}
	_putchar('\n');
}
