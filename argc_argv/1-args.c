#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function entry
 *
 * @argc: counts number of parameters in main
 * @argv: array of pointers/strings entered in main
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
