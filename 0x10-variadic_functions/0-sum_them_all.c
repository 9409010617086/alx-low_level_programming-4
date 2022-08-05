#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns sums of argument except n.
 * @n: The number of arguments entered
 *
 * Return: Sum of argument. If n == 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
