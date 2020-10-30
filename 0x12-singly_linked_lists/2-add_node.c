#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a lis_t list
 * @head: double pointer to head of the list.
 * @str: pointer to string.
 * Return: pointer to function.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i;

	i = 0;
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	while (str[i])
		i++;
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
