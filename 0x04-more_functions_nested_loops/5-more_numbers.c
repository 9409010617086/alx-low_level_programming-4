#include "main.h"

/**
 * more_numbers - Print 0 to 14 ten times
 * Return: Void.
 */
void more_numbers(void)
{
	char num[25];
	int i, j;

	num[21] = "01234567891011121314";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 22; j++)
		{
			if (num[j] != '\0')
			{
				_putchar(num[j]);
			}
		}
		_putchar('\n');
	}
}
