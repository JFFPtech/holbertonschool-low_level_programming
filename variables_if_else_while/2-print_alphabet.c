#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase,
 *		   followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}

	putchar('\n');

	return (0);
}
