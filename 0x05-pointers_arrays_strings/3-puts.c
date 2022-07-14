#include "main.h"
#include <string.h>
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: Pointer parameter.
 * Return: void.
 */
void _puts(char *str)
{
	int i;
	int n;

	n = strlen(str);

	for (i = 0; i <= n; i++)
	{
		_putchar(*(str + i));
	}
}
