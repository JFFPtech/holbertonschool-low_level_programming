#include "main.h"

/**
 * factorial - gets the factorial of n
 * @n: integer input
 *
 * Return: 1 if success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
