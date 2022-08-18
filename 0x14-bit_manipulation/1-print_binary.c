#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Decimal number to be converted to binary.
 */
void print_binary(unsigned long int n)
{
	unsigned int t = 1, i = 0, j = 0;
	int binary[50] = {0};

	while (t != 0)
    	{
        	binary[i] = n & 1;
        	t = n >> 1;
        	n = t;
        	i++;
	}

	while (j < i)
	{
		_putchar(binary[i - 1] + '0');
		i--;
	}
}
