#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: The separator of strings.
 * @n: The number of arguments entered.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *next;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		next = va_arg(ap, char *);

		if (next != NULL)
			printf("%s", next);
		else
			printf("(nil)");

		if (i < n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(ap);
}
