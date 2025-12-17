#include <stdio.h>
#include "main.h"

/**
* main - prints the number of arguments passed into it followed by a new line
* @argc: argument count
* @argv: argument vector
*
* Return: always 0 (success)
*/

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
