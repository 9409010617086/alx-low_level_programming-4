#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/*
 * main - Prints result of basic arithmetic.
 * @argc: Counts the number of argument passed.
 * @argv: Argument passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);
	char *operate;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operate = argv[2];

	if ((operate[0] == '/' || operate[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(operate);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = operation(num1, num2);
	printf("%d/n", result);

	return (0);
}
