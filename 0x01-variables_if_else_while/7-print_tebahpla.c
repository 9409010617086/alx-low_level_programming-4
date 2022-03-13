#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch - i);
	}

	putchar('\n');

	return (0);
}
