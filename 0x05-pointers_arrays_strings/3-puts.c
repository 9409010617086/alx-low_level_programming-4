#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string.
 *@str: Pointer parameter.
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
	_putchar('\n');
}
