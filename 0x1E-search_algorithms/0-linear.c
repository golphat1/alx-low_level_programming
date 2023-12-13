#include "search_algos.h"
/**
 * linear_search - entry point
 * int linear_search(int *array, size_t size, int value) - Entry point
 * @array: The pointer for the first element
 * @size: The n of the array
 * @value: what we are looking for in the array
 * Return: -1 for not found or Null array
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;

for (i = 0; i < size; i++)
{
if (array[i] == value)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
return (i);
break;
}
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
}
if (array == NULL || size == 0)
return (-1);

return (-1);
}
