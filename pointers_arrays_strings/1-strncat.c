#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to use
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* Copy at most n chars from src */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	/* Add null terminator */
	dest[i] = '\0';

	return (dest);
}
