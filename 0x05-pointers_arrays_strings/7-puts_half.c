#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half of a string.
 * @str: Pointer parameter.
 * Return: void.
 */
void puts_half(char *str)
{
	int i;
	int n;

	n = strlen(str);

	if (n % 2 == 0)
	{
		i = n / 2;
	}
	else
	{
		i = (n - 1) / 2;
	}

	for (; i <= n; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
