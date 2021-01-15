#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0, pc = 0;

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			temp = ht->array[i];
			while (temp)
			{
				if (pc > 0)
					printf(", ");
				printf("\'%s\': \'%s\'", temp->key, temp->value);
				pc++;
				temp = temp->next;
			}
			i++;
		}
		printf("}\n");
	}
}
