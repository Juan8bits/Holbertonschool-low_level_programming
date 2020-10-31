#include "lists.h"

/**
 * lengs - Function that returns leng of string
 * @s: input string
 * Return: Leng of a string.
 */

unsigned int lengs(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - Function
 * @head: pointer to pointer to address.
 * @str: pointer to string.
 * Return: Null if it failed or address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode;
	list_t *end;

	endnode = malloc(sizeof(list_t));
	if (!endnode)
		return (NULL);
	if (!*head)
	{
		endnode->str = strdup(str);
		endnode->len = lengs(str);
		endnode->next = NULL;
		*head = endnode;
		return (endnode);
	}
	end = *head;
	while (end->next)
	{
		end = end->next;
	}
	endnode->str = strdup(str);
	endnode->len = lengs(str);
	end->next = endnode;
	return (endnode);
}
