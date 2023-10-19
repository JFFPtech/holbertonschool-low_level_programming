#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 to 9, exclude 2 and 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		if (j != 50)
		{
			if (j != 52)
			{
				_putchar(j);
			}
		}
	}
	_putchar('\n');
}
