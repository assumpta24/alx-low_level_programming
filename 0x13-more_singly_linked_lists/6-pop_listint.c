#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * - and returns the head node’s data
 *
 * @head: head of linked list
 *
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr, *temp;

	int data = 0;


	while (*head == NULL)
	{
		return (0);


		ptr = *head;
		temp = ptr->next;
		data = ptr->n;

		free(ptr);

		*head = temp;
	}

	return (data);
}
