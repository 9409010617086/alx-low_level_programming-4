#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: A character string parameter.
 *
 * Return: An integer.
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int n = 1;

	if (s[i] == '\0')
	{
		return (n - 1);
	}

	return (n + _strlen_recursion(s + 1));
}
