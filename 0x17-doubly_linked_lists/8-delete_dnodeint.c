#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the head.
 * @index: is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int counter = 0;

	if (!head || !*head)
	{
		return (-1);
	}
	if (index == 0)
		*head = current_node->next;
	if (*head)
		(*head)->prev = NULL;
	free(current_node);
	return (1);
	while (current_node)
	{
		if (counter == index)
		{
			if (current_node->next)
				current_node->next->prev = current_node->prev;
			if (current_node->prev)
				current_node->prev->next = current_node->next;
			free(current_node);
			return (1);
		}
		current_node = current_node->next;
		counter++;
	}
	return (-1);
}
