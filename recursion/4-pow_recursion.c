#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: the base integer
* @y: the exponent integer
*
* Return: -1 if y is negative (error)
*         1 if y is 0 (base case)
*         x multiplied by the result of x^(y-1) recursively
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
