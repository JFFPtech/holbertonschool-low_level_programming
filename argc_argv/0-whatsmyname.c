#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: contains the number of arguments
 * @argv: array containing strings of what is entered in main argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
