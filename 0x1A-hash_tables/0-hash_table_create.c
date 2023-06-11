#include "hash_table"

/**
 * hash_table_create - A function that creates a hash table.
 * @size: Size of the array.
 *
 * Return: NULL - if an error occurs.
 * otherwise - pointer to the hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (x = 0; x < size; x++)
		ht->array[x] = NULL;

	return (ht);
