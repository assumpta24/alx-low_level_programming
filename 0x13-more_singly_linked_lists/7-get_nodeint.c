#include <stdio.h>
#include<stdlib>
#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a linked list
 * @head: head of linkd list
 * @index: the index of the node, starting at 0
 *
 * Return: ....
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int total = 0;

	if (head == NULL)
	{
		return (0);

		while (head != NULL)
		{
			if (total == index)
			{
				return (head);
				head = head->next;
				total++;
			}
		}
	}
	return (NULL);
}
