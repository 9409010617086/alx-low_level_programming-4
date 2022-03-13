#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	int i;
	char ch1;

	for (i = 0; i < 26; ++i)
	{
		ch1 = ch + i;
		if (ch1 == 'e'  ch1 == 'q')
		{
			continue;
		}
		else
		{
			putchar(ch1);
		}
	}

	putchar('\n');

	return (0);
}
