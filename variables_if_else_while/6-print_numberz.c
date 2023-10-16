#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all single digit numbers of base 10 from 0
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
