#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: number to be checked
 * @index: represents the indexof the bit
 *
 * Return: value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 9))
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
