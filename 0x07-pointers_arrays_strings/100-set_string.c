#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: Pointer parameter.
 * @to: Pointer parameter.
 * Return: Void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
