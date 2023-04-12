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
	listint_t *prv = NULL, *current;

	if (head != NULL)
	{
		while (*head)
		{
			current = (*head)->next;
		        (*head)->next = prv;
			prv = *head;
			*head = current;
		}
	}

		*head = prv;
		return (*head);
}
