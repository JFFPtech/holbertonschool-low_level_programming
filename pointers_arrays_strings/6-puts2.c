#include "main.h"

/**
 * puts2 - prints every other character of a string, starting
 * with the first character, then a new line
 * @str: value of string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	int k = 0;

	while (str[k] != '\0')
	{
	k++;
	}

	for (i = 0; i < k; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
