#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - a function that returns the square root of a number.
 * _sqrt - a function that checks if a number has a square root.
 *
 * @n: An integer parameter.
 * @num: An integer parameter.
 * @index: An integer parameter.
 *
 * Return: An integer.
 */
int _sqrt_recursion(int n)
{
	int index = 1;

	if (n < 1)
		return (-1);

	return (_sqrt(n, index));
}

/* _sqrt - a function that checks if a number has
a square root.
 *
 * @num: An integer parameter.
 * @index: An integer parameter.
 *
 * Return: An integer.
 */

int _sqrt(int num, int index)
{
	if (index * index == num)
		return (index);

	if (index > num)
		return (-1);

	return (_sqrt(num, index + 1));
}
