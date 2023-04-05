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

	listint_t *node;

	if (!*head || !head)
		return (-1);

	while (index == 0)
	{
		*head = node->next;
		free(node);

		return (1);
	}
}
