#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function adds new node at end
 * @head: head of linked list
 * @n: the value to add at the end of the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *ptr, *temp;
ptr = head;
temp = malloc(sizeof(listint_t));
temp->n = n;
temp->next = NULL;

while (ptr->next != NULL)
{
	ptr = ptr->next;
}
ptr->next = temp;

}
