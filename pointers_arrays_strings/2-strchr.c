#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @str: the string
 * @c: the character to find
 *
 * Return: a pointer to the first time c occurs
 */

char *_strchr(char *str, char c)
{
	int i;

	for (i = 0; str[i] >= '\0'; i++)
	{
		if (str[i] == c)
			return (str + i);
	}

	return (NULL);
}
