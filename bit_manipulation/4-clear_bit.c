#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to the bit
 * @index: the index to set the value
 *
 * Return: alawys 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
