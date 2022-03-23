#include "main.h"
#include <string.h>
/**
 * _print_rev - function that prints a string, in reverse.
 * @s: Pointer parameter.
 * Return: void.
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
