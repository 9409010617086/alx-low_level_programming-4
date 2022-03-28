#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: Pointer parameter.
 * Return: A char.
 */
char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'A' || str[i] == 'a')
		{
			str[i] = '4';
		}

		else if (str[i] == 'E' || str[i] == 'e')
		{
			str[i] = '3';
		}

		else if (str[i] == 'O' || str[i] == 'o')
		{
			str[i] = '0';
		}

		else if (str[i] == 'T' || str[i] == 't')
		{
			str[i] = '7';
		}

		else if (str[i] == 'L' || str[i] == 'l')
		{
			str[i] = '1';
		}
	}
	return (str);
}
