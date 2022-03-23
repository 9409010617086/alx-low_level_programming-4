#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints every other character of a string.
 * @str: Pointer parameter.
 * Return: void.
 */
void puts2(char *str)
{
	int i;
	int n;
	
	n = strlen(str);

	for (i = 0; i <= n; i++)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
