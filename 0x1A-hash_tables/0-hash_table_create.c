#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: Size of the new hash table. Should be unsigned long int.
 * Return: New hash table on succesful, else NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_t = NULL;
	hash_node_t **array = NULL;
	unsigned long int i = 0;

	new_hash_t = malloc(sizeof(hash_table_t));
	if (!new_hash_t)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (!array)
	{
		free(new_hash_t);
		return (NULL);
	}
	for (; i < size; i++)
		array[i] = NULL;

	new_hash_t->size = size;
	new_hash_t->array = array;
	return (new_hash_t);
}
