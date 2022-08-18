#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Decimal number to be converted to binary.
 * @index: Index where that is to be changed to 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n += 1 << index;

	if (*n == '\0')
		return (-1);
	return (1);
}
