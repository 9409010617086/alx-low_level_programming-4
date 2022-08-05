#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: A demacator of the numbers.
 * @n: Number of variable parameter inputted.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		separator = NULL;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d\n", va_arg(ap, int));
	}
}
