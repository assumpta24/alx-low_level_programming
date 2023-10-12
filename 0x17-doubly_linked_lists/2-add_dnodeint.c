#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * @head: double pointer to the head.
 * @n: integer value to be stored.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current_node;

	if (head == NULL)
	{
		return (NULL);
	}

	current_node = malloc(sizeof(dlistint_t));
	if (current_node == NULL)
		return (NULL);

	current_node->n = n;
	current_node->prev = NULL;
	current_node->next = *head;

	if (*head != NULL)
		(*head)->prev = current_node;
	*head = current_node;

	return (current_node);
}
