#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @last_dt: An integer parameter.
 * Return: An int.
 */
int print_last_digit(int last_dt)
{
	int n;
	n = last_dt % 10;
	_putchar('0' + n);
	return (last_dt % 10);
}
