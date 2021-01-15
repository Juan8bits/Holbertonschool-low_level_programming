#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: The hash table you want to look into.
 * @key: Is the key you are looking for.
 * Return: Returns the value associated with the element, or
 * NULL if key couldnt be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *temp;

	if (!ht || !key || *key == 0)
		return (NULL);
	index = key_index((unsigned const char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
