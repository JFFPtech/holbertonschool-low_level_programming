#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination of source output
 * @src: source of memory area input
 * @n: number of bytes to be copied
 * Return: pointer source
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
