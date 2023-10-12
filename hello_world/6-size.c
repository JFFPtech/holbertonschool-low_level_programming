#include <stdio.h>

/**
 * main - Prints the size of various types on the computer it is compiled
 *
 * Return: Always 0.
 */
int main(void)
{

	printf("Size of char: %zu byte(s)\n", sizeof(char charType));
	printf("Size of int: %zu byte(s)\n", sizeof(int intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int longintType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int longlongintType));
	printf("Size of float: %zu byte(s)\n", sizeof(float floatType));

	return (0);
}
