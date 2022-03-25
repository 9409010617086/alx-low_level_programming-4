#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: Pointer parameter.
 * @s2: Pointer parameter.
 * Return: An integer.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	if (s1 == s2)
	{
		diff = 0;
	}

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];

			break;
		}
	}
	return (diff);
}
