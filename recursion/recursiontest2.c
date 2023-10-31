#include <stdio.h>

unsigned int sumDigits(unsigned int num)
{
	if (num == 0)
		return 0;
	return (num % 10) + sumDigits(num / 10);
}


int main()
{
	printf("%i\n", sumDigits(204));
	return 0;
}
