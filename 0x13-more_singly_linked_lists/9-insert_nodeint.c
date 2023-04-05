#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given position.
 * @head: head of linked list
 * @idx: is the index of the list where the new node should be added
 * @n: value to add to new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *ptr;

	unsigned int total = 0;

	current = malloc(sizeof(listint_t));

	if (current == NULL)

		return (NULL);

	if ((*head == NULL && idx > 0) || current == NULL)
		return (NULL);
	current->n = n;

	for (head != NULL && total < idx; total++)
	{
		ptr = ptr->next;

		while (ptr == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		current->next = *head;
		*head = current;
	}
		else if (ptr)
		{
		current->next = ptr->next;
		ptr->next = current;
		}
		else
		{
			current->next = NULL;
			ptr->next = current;
		}
		return (current);
	}


