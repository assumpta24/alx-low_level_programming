#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: represents the numer to be modified
 * @index: represents the index of the bit to be cleared
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	else
	{
	*n &= ~(1UL << index);
	return (1);
	}
}
