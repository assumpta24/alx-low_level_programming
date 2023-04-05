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

	unsigned int pos = 0;

	ptr = *head;

	current = malloc(sizeof(listint_t));

	current->n = n;
	current->next = NULL;


	while (idx == 0)
	{
		ptr = ptr->next;
		pos++;
	}
	current->next = ptr->next;
	ptr->next = current;

	return (current);
}


