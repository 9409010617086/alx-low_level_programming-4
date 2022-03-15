#include "main.h"

/**
 * main - check the code
 * Description: Prints a-z in small caps
 * Return: Always 0 (Success)
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
