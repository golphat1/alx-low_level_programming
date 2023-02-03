#include <stdlib.h>
#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_t_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the listint_t.
 *
 * Returrn: If the list is not looped 0.
 * otherwise - the number of nodes in the list.
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next);
			while (fast)
			{
			if (slow == fast)
			{
			slow = head;
			while (slow != fast)
			{
			nodes++;
			slow = slow->next;
			}
			return (nodes);
			}
			slow = slow->next;
			fast = (fast->next)->next;
			}
			return (0);
}

/**
 * free listint_safe - frees a listint_t safely.
 * @h: A pointer to the address of the head of listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
