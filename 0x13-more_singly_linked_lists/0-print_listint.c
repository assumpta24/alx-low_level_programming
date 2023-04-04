#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all elements in linked list
 * @h: poiner to be listed
 *
 * Return: returns the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == Null)
		printf("linked list is empty:");
	while (h != Null)
	{
		printf("%d\n", h->n);
		h = h->n;
		num++;
	}
	return (num);
}

