#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * Description: function that sets head to NULL
 * @head: the head to linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head != NULL)
	{

	while (*head)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);

	}
	free(*head);
	*head = NULL;
	}
}
