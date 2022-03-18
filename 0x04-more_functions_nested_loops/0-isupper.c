#include "main.h"

/**
 * _isupper - Check if input is an uppercase.
 * @c: An integer parameter.
 * Return: An int.
 */
int _isupper(int c)
{
	int value;

	if (c >= 65 && c <= 90)
	{
		value = 1;
	}
	else
	{
		value = 0;
	}

	return (value);
}
