#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: one of the strings
* @s2: one of the strings
*
* Return: returns a pointer to a newly allocated space in memory
*         containing the concatenated string of s1 followed by s2,
*         or NULL if memory allocation fails
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int len1;
	unsigned int len2;
	char *new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	new_string = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}

	new_string[i] = '\0';

	return (new_string);
}
