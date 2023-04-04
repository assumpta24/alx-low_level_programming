#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == Null)
		printf("linked list is empty !:")

	while (h != Null)
	{
		printf("\n%d", h->n);
		h = h->next;
		num++;

	}
	printf("\n%d", h->n);
	return (num);
}
