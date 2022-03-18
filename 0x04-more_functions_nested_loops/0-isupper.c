#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
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
