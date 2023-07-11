#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: arguments represent a number to be compared
 * @m: argument represents a number to be compared
 *
 * Return: returns a number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int total = 0;

	while (xor > 0)
	{
		total += xor & 1;
		xor >>= 1;
	}
	return (total);
}

