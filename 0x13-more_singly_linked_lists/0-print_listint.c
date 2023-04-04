#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h);
{
	size_t num = 0;

	if (h == Null)
		printf("linked list is empty");
	struct node *ptr = Null;

	ptr = h;

	while (ptr != Null)
	{
		printf("%d", ptr→num);
		ptr = ptr→link;
	}
	return (num);
}
