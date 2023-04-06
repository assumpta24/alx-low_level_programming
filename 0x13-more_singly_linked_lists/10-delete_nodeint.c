#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index  of a linked list
 * @head: head of linked list
 * @index: Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos = 3;

	listint_t *prev, *current;

	if (*head == NULL)
		printf("linked list is empty!:");
	else if (index == pos)
	{
		*head = current->next;
		free(current);

		current = NULL;

	}
	else
	{
		while (pos != 2)
		{
			prev = current;
			current = current->next;
			pos--;
			return (1);
		}
		prev->next = current->next;
		free(current);
		current = NULL;

	}
	return (-1);
}
