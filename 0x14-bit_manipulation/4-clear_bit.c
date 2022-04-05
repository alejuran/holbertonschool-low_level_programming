#include "main.h"

/**
 * clear_bit - function that sets the value of a bit
 * @n: pointer int
 * @index: bit index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
