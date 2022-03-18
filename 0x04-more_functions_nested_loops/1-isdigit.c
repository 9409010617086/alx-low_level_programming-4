#include "main.h"

/**
 * _isdigit - Check if input is an uppercase.
 * @c: An integer parameter.
 * Return: An int.
 */
int _isdigit(int c)
{
	int value;

	if (c >= 48 && c <= 57)
	{
		value = 1;
	}
	else
	{
		value = 0;
	}

	return (value);
}
