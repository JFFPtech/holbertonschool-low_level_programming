#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurence in a string of bytes in accept
 * @s: string to copy bytes from
 * @accept: string to compare bytes to
 *
 * Return: first occurence of s, or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
