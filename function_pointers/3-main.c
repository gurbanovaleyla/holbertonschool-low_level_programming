#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point, performs simple operations from command line
 * @argc: number of command line arguments
 * @argv: array of strings containing command line arguments
 *
 * Return: 0 on success, exits with 98, 99, or 100 on errors
 *
 * Description: The program expects 3 arguments:
 * num1 operator num2. It converts the numbers using atoi,
 * selects the operation using get_op_func, and prints the result.
 * It handles errors such as wrong argument count, invalid operator,
 * and division/modulo by zero.
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(num1, num2));
	return (0);
}
