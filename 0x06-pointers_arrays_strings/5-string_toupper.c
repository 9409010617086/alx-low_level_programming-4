#include "main.h"

/**
 * string_toupper - function that changes all lowercase to uppercase.
 * @str: Pointer parameter.
 * Return: An integer.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
