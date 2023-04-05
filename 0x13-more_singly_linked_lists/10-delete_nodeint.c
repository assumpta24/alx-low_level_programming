#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index  of a linked list
 * @head: head of linked list
 * @index: Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int total = 1;

	listint_t *node1, *node2;

	if (head == NULL)
		return (-1);
	else if (index == 0)
	{
		node2 = *head->next;
		*head = node2;
		return (1);
		node2 = *head;
	}

for (total = 0; total < index - 1; total++)
	{
		while (node2->next == NULL)
			return (-1);
		node2 = nde2->next;
	}
		node1 = node2->next;
		node2 = node1->next;
		free(node2);

		return (1);
	}

