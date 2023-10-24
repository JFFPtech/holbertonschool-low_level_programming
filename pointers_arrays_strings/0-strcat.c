#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: first string value
 * @dest: string to be appended
 *
 * Return: the two strings concatenated
 */

char *_strcat(char *dest, char *src)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[i] = src[k];
		i++;
	}
	return (dest);
}
