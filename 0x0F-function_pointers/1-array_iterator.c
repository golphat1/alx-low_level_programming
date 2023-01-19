#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array of iterate over
 * @size: size of array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
