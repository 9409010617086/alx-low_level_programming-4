#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 *
 * @argc: Interger parameter to count all number of arguments
 * @argv: Argument vector.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
