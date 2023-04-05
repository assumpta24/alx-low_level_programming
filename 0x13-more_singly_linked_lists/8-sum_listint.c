#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data in linked list
 * @head: head of linked list
 *
 * Return: .....
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head)
	{
		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}

