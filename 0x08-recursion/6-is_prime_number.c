#include "main.h"

int prime(int, int);

/**
 * is_prime_number - function that returns 1 if input is a prime, else 0.
 *
 * @n: An integer parameter.
 *
 * Return: An integer.
 */
int is_prime_number(int n)
{
	int index = 2;

	return (prime(n, index));
}

/**
 * prime - A function that checks if a number is a prime number.
 *
 * @num: An integer parameter.
 * @index: An integer parameter.
 *
 * Return: An integer.
 */

int prime(int num, int index)
{
	if (num < 2)
		return (0);

	if (num % index == 0)
		return (0);

	if (index > num/2 + 1)
		return (1);

	return (prime(num, index + 1));
}
