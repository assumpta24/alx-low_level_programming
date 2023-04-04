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

	while (p != Null)
	{
		printf("%d", p->data);
		p = p->link;
	}
	return (data);
}
