#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: An integer parameter.
 * Return: An int.
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');		
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
                _putchar('-');
        }
	return (value);
}
