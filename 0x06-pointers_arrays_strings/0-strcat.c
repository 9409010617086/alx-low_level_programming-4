#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: Pointer parameter.
 * @src: Pointer parameter.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int j;

	for (n = 0; dest[n] != '\0'; n++)
		;

	for (j = 0; src[j] != '\0' ; j++)
	{
		dest[n] = src[j];
		n++;
	}

	return (dest);
}
