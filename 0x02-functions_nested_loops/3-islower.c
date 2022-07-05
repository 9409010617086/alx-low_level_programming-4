#include <stdio.h>

/*
* 3-isloweer.c - Checks if a character is a lowercase.
*/

int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
