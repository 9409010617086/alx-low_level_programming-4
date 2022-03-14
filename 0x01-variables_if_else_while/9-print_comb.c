#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int i;

	num = '0';

	for (i = 0; i < 10; ++i)
	{
		if (i < 9)
		{
			putchar(num + i);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(num + i);
		}
	}

	return (0);
}
