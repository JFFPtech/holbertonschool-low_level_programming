#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: counts the number of parameters that go into main
 * @argv: pointer of array containing strings entered in main
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int n, j;

	j = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		j = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (j);
}
