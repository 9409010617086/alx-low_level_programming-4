#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: Pointer parameter.
 * @accept: Pointer parameter
 * Return: Unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j, k;

	for (j = 0; s[j] >= '\0'; j++)
	{
		for (k = 0; accept[k] > '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				i++;
				break;
			}
		}
		if (accept[k] == '\0')
		{
			break;
		}
	}
	return (i);
}
