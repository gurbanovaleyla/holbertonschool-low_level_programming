#include "main.h"

/**
 * _strncpy - copies up to n characters from src to dest
 * @dest: destination buffer
 * @src: source string
 * @n: max number of bytes to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
