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

	if (h == Null)
		printf("linked list is empty:");

	const listint_t *ptr = Null;

	while (ptr != Null)
	{
	printf("%d\n", ptr->n);
	ptr = ptr->next;
	nbr++;
	}
	return (nbr);
}
