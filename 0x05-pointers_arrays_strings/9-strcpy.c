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
	int n;

	for (n = 0; src[n] <= '\0'; n++)
	{
		dest[n] = src[n];
	}

	return (dest);
}
