#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcpy - Write a function that copies the string pointed to by src.
 * @dest: Pointer parameter.
 * @src: Pointer parameter.
 * Return: void.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		n++;
	}

	for (i = 0; i < n + 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
