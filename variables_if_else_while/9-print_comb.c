#include <stdio.h>

/**
 * main - prints all single-digit numbers separated by ", "
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');         /* first putchar: the digit */
		if (i != 9)
		{
			putchar(',');         /* second putchar: comma */
			putchar(' ');         /* third putchar: space */
		}
	}
	putchar('\n');                /* fourth putchar: newline */

	return (0);
}
