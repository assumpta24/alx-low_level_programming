#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int num = 0;
	int i = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = num * 2 + (b[i] - '0');
	}
	return (num);
}
