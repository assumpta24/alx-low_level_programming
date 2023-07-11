#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: represents the number to be modified
 * @index: represents index of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	else
	{
		*n |= 1UL << index;
		return (1);
	}
}

