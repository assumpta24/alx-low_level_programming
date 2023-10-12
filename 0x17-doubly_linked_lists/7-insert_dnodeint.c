#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given pos.
 * @h: pointer to the head.
 * @idx: is the index of the list where the new node should be added
 * @n: integer value.
 *
 * Return: NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *current_node = *h;

	if (!h || !ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = ptr->prev = NULL;
	if (!idx)
	{
		if (current_node)
			current_node->prev = ptr;
		ptr->next = current_node;
		*h = ptr;
		return (ptr);
	}
	for (; current_node && idx > 0; idx--)
		current_node = current_node->next;
	if (idx)
	{
		free(ptr);
		return (NULL);
	}
	ptr->next = current_node;
	ptr->prev = current_node->prev;
	if (current_node->prev)
		current_node->prev->next = ptr;
	current_node->prev = ptr;
	return (ptr);
}
