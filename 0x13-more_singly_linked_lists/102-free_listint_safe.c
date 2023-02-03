#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list, including lists with loops
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	current = *h;
	while (current != NULL)
	{
		count++;
		tmp = current;
		current = current->next;
		free(tmp);
		if (current == *h)
			break;
	}
	*h = NULL;
	return (count);
}
