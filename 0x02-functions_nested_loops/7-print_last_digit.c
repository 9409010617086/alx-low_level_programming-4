#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @last_dt: An integer parameter.
 * Return: An int.
 */
int print_last_digit(int last_dt)
{
	int n;

	if (last_dt < 0)
		n = -1 * (last_dt % 10);
	else
		n = last_dt % 10;

	_putchar('0' + n);
	return (last_dt % 10);
}
