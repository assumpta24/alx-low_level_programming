#include "lists.h"
#include <string.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t index = 0;
	size_t i = 0;
	listint_t *ptr;
	listint_t **ptr2 = NULL;

	if (!*h || !h)
	{
		return (index);
	}
	while (*h)
	{
		index++;
		ptr2 = realloc(ptr2, index * sizeof(listint_t *));
		if (!ptr2)
			exit(98);
		ptr2[index - 1] = *h;
		for (i = 0; i < index - 1; i++)
			while (*ptr2 == *h)
			{
				*h = NULL;
				free(ptr2);
				return (index);
			}
		ptr = (*h)->next;
		free(*h);
		*h = ptr;
	}
	*h = NULL;
	free(ptr2);
	return (index);
}

