#include "main.h"

/**
 * _prime_helper - checks if n is divisible by any number from div to n-1
 * @n: number to check
 * @div: current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _prime_helper(int n, int div)
{
	if (n <= 1)
		return (0);
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (_prime_helper(n, div + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (_prime_helper(n, 2));
}
