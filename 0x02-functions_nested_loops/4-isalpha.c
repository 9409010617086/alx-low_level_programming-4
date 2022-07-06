#include <stdio.h>

/**
 * _alpha - Checks if a charcater is an alphabet.
 * @c: An integer parameter.
 * Return: 0 if the character is not an alphabet, and 1 if it is.
 */

int _isalpha(int c)
{
  if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
  {
    return (1);
  }
  else
  {
		return (0);
	}
}
