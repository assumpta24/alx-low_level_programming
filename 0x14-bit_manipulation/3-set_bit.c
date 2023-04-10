#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to index
 * @index: starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1ul << index;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	if (*n)
	{
		*n |= a;

		return (1);
	}
	return (0);
}
