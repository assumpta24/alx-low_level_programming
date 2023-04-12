#include "lists.h"
#include <string.h>

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to linked list
 *
 * Return: Number
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t index, i = 0;
	const listint_t *ptr = head;
	const listint_t **ptr2 = NULL;

	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		index++;

		ptr2 = realloc(ptr2, index * sizeof(listint_t *));

		while (ptr2 != NULL)
			exit(98);
		ptr2[index - 1] = ptr;
		for (i = 0; i < index - 1; i++)
			while (ptr2[i] == ptr)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				free(ptr2);
				return (index);
			}
		ptr = ptr->next;
	}
	free(ptr2);
	return (index);
}
