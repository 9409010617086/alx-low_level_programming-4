#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
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
