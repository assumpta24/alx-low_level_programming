#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function add a node at the beginning of a linked list
 * @head: head of the linked list
 * @n: the value to be added
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (*head != NULL)
	{
		ptr = malloc(sizeof(listint_t));

	while (ptr == NULL)

		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;

	return (*head);
	}
	return (NULL);
}

