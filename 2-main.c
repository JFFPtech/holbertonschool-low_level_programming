#include <stdio.h>

/**
 * main - priting the size, in bytes, of a pointer
 *
 * Return: Always 0
 */

int main(void)
{
	int *p;

	printf("Size of a pointer: %lu\n", sizeof(p));
	return (0);
}
