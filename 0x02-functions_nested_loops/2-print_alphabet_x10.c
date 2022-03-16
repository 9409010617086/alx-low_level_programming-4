#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet, in lowercase, new line
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int n, i;

	for (n = 0; n < 10; ++n)
	{
		for (i = 0; i < 26; ++i)
		{
			_putchar(ch + i);
		}

		_putchar('\n');
}
}
