#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int i;
	int j;
	int num3;
	int num4;

	num1 = '0';
	num2 = '0';

	for (i = 0; i < 10; ++i)
	{
		num3 = num1 + i;
		for (j = 0; j < 10; ++j)
		{
			num4 = num2 + j;

			if (num3 == num4)
			{
				continue;
			}
			else if (num3 > num4)
			{
				continue;
			}
			else
			{
				putchar(num3);
				putchar(num4);

				if (num3 < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
