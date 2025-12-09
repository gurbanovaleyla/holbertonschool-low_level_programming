#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	/* tap stringin uzunluğunu */
	while (s[end] != '\0')
		end++;

	end--; /* son simvolun indexi */

	/* swap loop */
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
