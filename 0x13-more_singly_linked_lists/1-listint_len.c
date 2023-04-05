#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in linked list
 * @h: pointer to be returned
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);

	while (h)
	{

		h = h->next;
		num++;
	}

}
