#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all elements in linked list
 * @h: type of listint to be printed
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t nbr = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbr++;

	}
	return (nbr);
}
