#include <stdio.h>

/**
 *
 * main -  a program that finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;
	int prime;

	for (i = 2; i < 612852475143/2; i++)
	{
		if (612852475143 % i == 0)
		{
			prime = i;
		}
	}

	printf("%d", prime);
	system("pause");
	return (0);
}
