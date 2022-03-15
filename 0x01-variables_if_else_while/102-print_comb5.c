#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3, num4, i, j, k, l,num5, num6, num7, num8;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	num4 = '0';
	for (i = 0; i < 10; ++i)
	{
		num5 = num1 + i;
		for (j = 0; j < 10; ++j)
		{
			num6 = num2 + j;
			for (k = 0; k < 10; ++k)
			{
				num7 = num3 + k;
				for (l = 0; l < 10; ++l)
				{
					num8 = num4 + l;
					if (num6 == num8)
					{
						continue;
					}
					else if (num6 > num8)
					{
						continue;
					}
					else if (num6 == num5)
					{
						continue;
					}
					else if (num6 > num5)
					{
						continue;
					}
					else
					{
						putchar(num5);
						putchar(num6);
						putchar(' ');
						putchar(num7);
						putchar(num8);

						if (num6 < '8' && num8 < '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
