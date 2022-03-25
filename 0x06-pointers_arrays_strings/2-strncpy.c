#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: Pointer parameter.
 * @src: Pointer parameter.
 * @n: Integer parameter.
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
