#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: ...
 * @m: ...
 * - You are not allowed to use the % or / operators
 *
 * Return: Always 0;
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int z = n ^ m;
	unsigned long int i = 0;

	if (z)
	{
		i += z & 1;
	}
	else
	{
		return (i);
	}
	return (0);
}
