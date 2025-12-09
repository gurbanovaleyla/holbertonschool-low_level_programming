#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to use
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
}
