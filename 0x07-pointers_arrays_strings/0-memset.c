#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: Pointer parameter.
 * @b: Char parameter.
 * @n: unsigned int parameter.
 * Return: Char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
