#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: string output
 * @src: string input
 * @n: number of bytes
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0';
			index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
