#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';
	int i;

	for (i = 0; i < 26; ++i)
	{
		putchar(ch + i);
	}

	for (i = 0; i < 26; ++i)
	{
		putchar(CH + i);
	}

	putchar('\n');

	return (0);
}
