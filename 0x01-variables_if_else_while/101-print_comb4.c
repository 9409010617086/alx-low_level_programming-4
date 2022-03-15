#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3, i, j, k, num4, num5, num6;
	num1 = '0';
	num2 = '0';
	num3 = '0';
	for (i = 0; i < 10; ++i)
	{
		num4 = num1 + i;
		for (j = 0; j < 10; ++j)
		{
			num5 = num2 + j;
			for (k = 0; k < 10; ++k)
			{
				num6 = num3 + k;
				if (num4 == num5)
				{
					continue;
				}
				else if (num5 == num6)
				{
					continue;
				}
				else if (num4 == num6)
				{
					continue;
				}
				else if (num4 > num5)
				{
					continue;
				}
				else if (num5 > num6)
				{
					continue;
				}
				else
				{
					putchar(num4);
					putchar(num5);
					putchar(num6);
					if (num4 < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
