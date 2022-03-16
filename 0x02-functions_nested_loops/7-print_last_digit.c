#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @last_dt: An integer parameter.
 * Return: An int.
 */
int print_last_digit(int last_dt)
{
	last_dt = last_dt % 10;
	_putchar(last_dt);
	return (last_dt);
}
