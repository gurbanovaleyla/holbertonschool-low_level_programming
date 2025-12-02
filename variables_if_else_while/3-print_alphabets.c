#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++) /* lowercase */
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++) /* uppercase */
		putchar(c);
	putchar('\n'); /* newline */

	return (0);
}
