#include <stdio.h>

/**
 * _islower - Checks if a character is a lowercase.
 * @c: An integer parameter
 * Return: O if not a lowercase, and 1 if an uppercase.
 */

int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
