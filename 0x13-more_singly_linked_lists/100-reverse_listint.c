#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: head to linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv, *current;

	prv->n = n;
	prv->next = NULL;

	current->n = n;
	current->next = NULL;

	if (head != NULL)
	{
		while (**head)
		{
			current = *head;
			*head = (*head)->next;
			current->next = prv;
			prv = current->next;
		}

		*head = prv;
		return (*head);
	}
	return (NULL);
}
