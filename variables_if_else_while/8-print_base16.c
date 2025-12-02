#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0'); /* first putchar: digits 0-9 */
	for (i = 0; i < 6; i++)
		putchar(i + 'a'); /* second putchar: letters a-f */
	putchar('\n');        /* third putchar: newline */

	return (0);
}
