#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h);
{
	size_t ptr;


	if (h == Null)
		printf("linked list is empty");
	struct node *ptr = Null;

	ptr = h;

	while (ptr != Null)
	{
		printf("%d", ptr->data);
		ptr = ptr->link;
	}
	return (data);
}
