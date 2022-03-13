#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';
	char ch = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num + i);
	}

	for (i = 0; i < 6; i++)
	{
		putchar(ch + i);
	}

	putchar('\n');

	return (0);
}
