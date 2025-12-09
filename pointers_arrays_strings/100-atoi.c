#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int result = 0;

	/* Process all characters until a digit */
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}

	/* Convert digits */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	/* Apply sign safely */
	if (sign < 0)
		return (-((int)result));
	return ((int)result);
}
