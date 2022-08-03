#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name.
 * @name: Name of a person.
 * @f: Pointer to a function that prints a name.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
