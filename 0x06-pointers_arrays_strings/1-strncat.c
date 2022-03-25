#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: Pointer parameter.
 * @src: Pointer parameter.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n ; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
