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
	size_t nodes = 0;

	while (h->next != Null)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	printf("%d\n", h->n);
	return (nodes);
}
