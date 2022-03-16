#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 10; ++i)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
