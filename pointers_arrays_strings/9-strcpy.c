#include "main.h"

/**
 * *_strcpy - copies the string pointed to src, including the null byte \0
 * to the buffer pointed by dest
 * @src: source to by copied
 * @dest: destination or location to copy the code
 *
 * Return: copy of the string in the new destination
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
