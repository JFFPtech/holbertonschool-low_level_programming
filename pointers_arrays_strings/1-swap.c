#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *@a: value of first int
 *@b: value of second int
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
