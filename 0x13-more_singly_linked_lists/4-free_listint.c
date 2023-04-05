#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function tha frees a linked list
 * @head: head of a linked list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{

		head = head->next;

		free(ptr);

	}
	free(head);
}
