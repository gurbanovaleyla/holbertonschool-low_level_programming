#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;

	i++;

	while (s[i] != '\0')
	{
		if (strchr(sep, s[i - 1]) != NULL && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		i++;
	}

	return (s);
}
