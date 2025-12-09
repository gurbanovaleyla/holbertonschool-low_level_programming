#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	/* process signs before the number */
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}

	/* convert digits to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (sign == 1)
			num = num * 10 + (s[i] - '0');
		else
			num = num * 10 - (s[i] - '0');
		i++;
	}

	return (num);
}
