#include "main.h"

/**
 * jack_bauer - Prints the minutes of the day.
 * 
 * Return: void.
 */
void jack_bauer(void)
{
	int i, j, k ,l;
	char d, e, f, g, h;

	d = '0';

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					e = d + i;
					f = d + j;
					g = d + k;
					h = d + l;

					if (e == '2' && f >= '4' )
					{
						exit;
					}
					else
					{
						putchar(e);
						putchar(f);
						putchar(':');
						putchar(g);
						putchar(h);
						putchar('\t');
					}
				}
			}
		}
	}
	return (0);
}
