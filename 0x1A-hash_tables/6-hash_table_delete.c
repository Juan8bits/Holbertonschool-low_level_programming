#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp2;
	unsigned long int i = 0;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp)
			{
				temp2 = temp;
				temp = temp->next;
				free(temp2->key);
				free(temp2->value);
				free(temp2);
			}
		}
		free(ht->array);
		free(ht);
	}
}
