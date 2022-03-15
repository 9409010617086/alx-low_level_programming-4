#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i < 26; ++i)
	{
		_putchar(ch + i);
	}

	_putchar('\n');
}
