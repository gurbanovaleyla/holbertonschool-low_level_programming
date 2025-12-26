#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes from s2
* Return: pointer to newly allocated memory, NULL if fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;
	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;
	if (n < len2)
		len2 = n;
	new_string = malloc(len1 + len2 + 1);
	if (new_string == NULL)
		return (NULL);
	while (i < len1)
	{
		new_string[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}
	new_string[i] = '\0';
	return (new_string);
}
