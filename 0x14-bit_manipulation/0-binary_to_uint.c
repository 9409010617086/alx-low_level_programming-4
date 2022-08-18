#include "main.h"
#include <stdlib.h>

/**
 * power - Return num^order.
 * @num: The number.
 * @order: The order to which num is raised.
 *
 * Return: num^order.
 */
int power(int num, int order)
{
	int i, exponent = 1;

	for (i = 0; i < order; i++)
		exponent *= num;
	return (exponent);
}

/**
 * @binary_to_uint - function that converts a binary number to an unsigned int
 * @b: Strings of binary numbers.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int length, order = 0;

	if (b == NULL)
		return ('\0');

	for (length = 0; b[length] != '\0'; )
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] == '0')
			decimal += 0;
		else if (b[length] == '1')
			decimal += power(2, order);
		/* Returns 0 if there is a char other than 1 or 0 */
		else
			return ('\0');
        
	order++;
	}
	return (decimal);
}
