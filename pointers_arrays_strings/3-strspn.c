#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the string to search
* @accept: the string containing characters to match
*
* Return: the number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, count = 0;
	int found;

	while (s[i] != '\0')
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (found)
			count++;
		else
			break;

		i++;
		}

	return (count);
}
