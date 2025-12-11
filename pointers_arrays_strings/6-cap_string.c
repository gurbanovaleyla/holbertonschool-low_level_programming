#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to modify
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = 0;
			while (sep[j] != '\0')
			{
				if (s[i - 1] == sep[j])
				{
					s[i] -= 32;
					break;
				}
				j++;
			}
		}
		i++;
	}

	return (s);
}
