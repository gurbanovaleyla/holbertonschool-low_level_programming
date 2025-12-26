#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array and initializes to 0
* @nmemb: number of elements
* @size: size of each element
* Return: pointer to allocated memory, NULL if fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_bytes, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_bytes = nmemb * size;
	ptr = malloc(total_bytes);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_bytes; i++)
		ptr[i] = 0;

	return (ptr);
}
