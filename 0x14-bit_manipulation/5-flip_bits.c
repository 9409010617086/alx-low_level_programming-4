#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: Decimal number to flip with against m.
 * @m: Decimal number to flip with against n.
 *
 * Return: unsigned int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor, count = 0;

	/* 0 ^ 1 = 1; 1 ^ 1 = 0; 0 ^ 0 = 0 */
	xor = n ^ m;
	while (xor > 0)
	{
		/* Check for all flipped indexes */
		if ((xor & 1) != 0)
		count++;

		/*Left shifts all index for each index to be 'xored' with 1*/
		xor >>= 1;
	}
	return (count);
}
