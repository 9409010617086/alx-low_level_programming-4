#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int n, i;

	for(i = 0; i < 10; ++i)
	{
		for (i = 0; i < 26; ++i)
		{
			_putchar(ch+i);
		}

		_putchar('\n');
}
}
