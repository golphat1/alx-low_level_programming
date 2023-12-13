#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list
 * @list: The pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where
 * the value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump_step = sqrt(size);
listint_t *current = list, *prev = NULL;
size_t i;

if (list == NULL || size == 0)
return (NULL);

while (current->next != NULL && current->n < value)
{
prev = current;
for (i = 0; i < jump_step && current->next != NULL; i++)
{
current = current->next;
}
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
}

printf("Value found between indexes [%lu] and [%lu]\n",
prev->index, current->index);

while (prev != NULL && prev->index <= current->index)
{
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
if (prev->n == value)
return (prev);
prev = prev->next;
}

return (NULL);
}
