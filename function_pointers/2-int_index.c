#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a function pointer
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @cmp: function pointer to compare values
 *
 * Return: index of first element for which cmp != 0, or -1 if none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
