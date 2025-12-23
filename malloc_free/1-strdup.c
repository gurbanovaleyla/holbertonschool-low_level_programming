#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
*           which contains a copy of the string given as a parameter
* @str: string to duplicate
*
* Return: pointer to duplicated string, or NULL if it fails
*/

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
