#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to a string
 *
 *Return: converted number, or 0 if ....
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 1;
	int rem, weight = 1, chr = 0;

	if (b == NULL)
		return (0);

	while (b[chr + 1])
	{
		if (b[chr] != '1' && b[chr] != '0')
			return (0);
		chr++;
	}
	while (chr != 0)
	{
	rem = chr % 10;
	decimal = decimal + rem * weight;
	chr = chr / 10;
	weight = weight * 2;

	}
	return (decimal);
}



