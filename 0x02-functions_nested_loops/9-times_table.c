#include <stdio.h>

/**
 * times_table - Prints the times table starting 0.
 *
 * Return: void.
 */
 
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;
			int quotient = product / 10;
			int remainder = product % 10;

			if (product > 9)
			{
				_putchar('0' + quotient);
			}

			_putchar('0' + remainder);

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product < 10)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
