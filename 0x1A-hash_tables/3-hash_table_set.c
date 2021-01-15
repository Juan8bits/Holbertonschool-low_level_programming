#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: Is the hash table you want to add or update the key/value.
 * @key: Is the key. key can not be an empty string
 * @value: Is the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp = NULL;
	unsigned int indx;

	if (!ht || !key || !value || *key == 0)
		return (0);

	indx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[indx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	temp = add_node(ht->array[indx], key, value);
	if (!temp)
		return (0);
	ht->array[indx] = temp;
	return (1);
}
/**
 * add_node - Function that add new node at the beginning of a hash_node_t.
 * @head: Pointer to head of a list or the position to add a node.
 * @key: Key value.
 * @value: Value of the node.
 * Return: Pointer to new node, else NULL.
 */
hash_node_t *add_node(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new_n;

	new_n = malloc(sizeof(hash_node_t));
	if (!new_n)
		return (NULL);
	new_n->key = strdup(key);
	new_n->value = strdup(value);
	new_n->next = head;
	head = new_n;
	return (head);
}
