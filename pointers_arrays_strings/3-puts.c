#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 *@str: input string
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
		_putchar('\n');
}
