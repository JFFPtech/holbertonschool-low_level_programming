#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, but for multiples of 3
 *	Fizz is printed instead of the number, for multiples
 *	of five, Buzz, and for multiples of both 3 and 5, FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			print("Buzz");

		else
			print("%d", num);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
