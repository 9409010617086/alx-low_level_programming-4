#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to  at a given index.
 * @n: Decimal number to be converted to binary.
 * @index: Index where that is to be changed to 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);

	if (*n == '\0')
		return (-1);
	return (1);
}
