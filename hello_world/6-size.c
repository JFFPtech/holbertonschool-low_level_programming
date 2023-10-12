#include <stdio.h>

/**
 * main - Prints the size of various types on the computer it is compiled and run on
 *
 * Return: Always 0.
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of char: %zu bytes/n", sizeof(charType));
	printf("Size of int: %zu bytes/n", sizeof(intType));
	printf("Size of long int: %zu bytes/n", sizeof(longintType));
	printf("Size of long long int: %zu bytes/n", sizeof(longlongintType));
	printf("Size of float: %zu bytes/n", sizeof(floatType));

	return (0);
}
