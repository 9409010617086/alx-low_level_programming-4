#include "main.h"

/**
 * main - check the code
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
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
