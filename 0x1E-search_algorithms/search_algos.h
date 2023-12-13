#define MAIN_H
#ifndef MAIN_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;
/**
 * main - header file for prototype
 * void prototypes (void)
 * int prototypes (int)
 * @array: protoypt
 * @size: prototype
 * @value: prototype
 * linear_search - entry point for prototype
 * binary_search - entry point for proptoype 2
 * jump_search - entry point for prototype 3
 * interpolation_search - entry point for prototype 4
 * exponential_search - entry point for prototype 4
 * advanced_binary - entry point for prototype 5
 * Return: -1 for fail
 */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif
