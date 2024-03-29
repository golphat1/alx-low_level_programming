#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a listint_t list.
 * @head: ointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
