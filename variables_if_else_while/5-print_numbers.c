#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single digit numbers of base 10 from 0
 *
 * Return: Always 0
 */
int main(void)
{
	char x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');

		putchar('\n');

return (0);
}
