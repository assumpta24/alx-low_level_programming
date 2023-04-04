#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to be listed
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
		printf("%d\n", h->n);
		h = h->next;
		num++;

	}
	printf("%d\n", h->n);
	return (num);
}
