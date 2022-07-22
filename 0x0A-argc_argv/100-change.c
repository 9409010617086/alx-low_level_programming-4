#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the min no. of coins to make change for an amount of money.
 *
 * @argc: Interger parameter to count all number of arguments.
 * @argv: Argument vector.
 *
 * Return: 0 if successful, and 1 if unsuccessful.
 */

int main(int argc, char *argv[])
{
	int num = 0;
	int cent = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cent >= 25)
	{
		num += (cent / 25);
		cent = cent % 25;
	}

	if (cent >= 10)
	{
		num += (cent / 10);
		cent = cent % 10;
	}

	if (cent >= 5)
	{
		num += (cent / 5);
		cent = cent % 5;
	}

	if (cent >= 2)
	{
		num += (cent / 2);
		cent = cent % 2;
	}

	if (cent == 1)
	{
		num += (cent / 1);
	}

	printf("%d\n", num);

	return (0);
}
