#include "main.h"

/**
 * prime - verifies numbers from 1 to n
 * @a: same number as n
 * @b: numbers from 1 to n
 *
 * Return: 1 if succesful
 */

int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime(a, b + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number integer
 *
 * Return: 1 if succesful
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
