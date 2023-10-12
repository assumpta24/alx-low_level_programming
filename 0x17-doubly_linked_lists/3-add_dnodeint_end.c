#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head.
 * @n: integer value to be stored.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_node, *ptr;

	if (head == NULL)
	{
		return (NULL);
	}

	current_node = malloc(sizeof(dlistint_t));
	if (current_node == NULL)
		return (NULL);
	current_node->n = n;
	current_node->next = NULL;

	if (*head == NULL)
	{
		current_node->prev = NULL;
		*head = current_node;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		current_node->prev = ptr;
		ptr->next = current_node;
	}
	return (current_node);
}
