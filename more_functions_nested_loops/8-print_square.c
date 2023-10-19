#include "main.h"

/**
 * print_square - This function prints a square, followed by a new line
 *@size: the size of the square
 * Return: Always 0
 */

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}

