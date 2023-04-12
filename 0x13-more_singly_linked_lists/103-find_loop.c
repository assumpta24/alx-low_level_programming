#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to function
 *
 * Return: NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1 = head;
	listint_t *ptr2 = head;

	while (ptr1 && ptr2 && ptr2->next)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;

		if (ptr1 == ptr2)
		{
			ptr1 = head;
		}
		while (ptr1 != ptr2)
		{
			ptr1 = ptr1->next;
			ptr2 = ptr2->next;
		}
		return (ptr1);
	}
	return (NULL);
}
