#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		
		return (1);
	}

	else if (n < 0)
	{
		_putchar('+');
                _putchar(',');
                _putchar(' ');

                return (1);
	}

	else
	{
		_putchar('+');
                _putchar(',');
                _putchar(' ');

                return (0);
	}
}
