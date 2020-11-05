#include "lists.h"
/**
 * listint_len - Function that returns the number of elements in a linked list.
 * @h: pointer with address to linked list.
 * Return: Number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodecounter;

	for (nodecounter = 0; h; nodecounter++)
		h = h->next;
	return (nodecounter);
}

/**
 * add_nodeint - Function that adds a new node at the beginning of a list.
 * @head:pointer with address to head linked list.
 * @n: Integer to add at in new node to list.
 * Return: address to new node on head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

/**
 * insert_nodeint_at_index - Function that inserts a new node at
 * a given position.
 * @head: Pointer with address to pointer to head of a list.
 * @idx: The index of the list where the new node should be added.
 * @n: Conten of the new node.
 * Return: The address of the new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *copy = NULL;
	listint_t *aux = NULL;
	unsigned int lenlist, i;

	i = 0, lenlist = 0;
	if (!head)
		return (NULL);
	lenlist = listint_len(*head);
	if (idx > lenlist)
		return (NULL);
	else if (idx == 0)
		aux = add_nodeint(head, n);
	else if (idx == lenlist)
		aux = add_nodeint_end(head, n);
	else
	{
		copy = *head;
		aux = malloc(sizeof(listint_t));
		if (!aux)
			return (NULL);
		while (i <= idx)
		{
			if (i == idx - 1)
			{
				aux->next = copy->next;
				aux->n = n;
				copy->next = aux;
				break;
			}
			copy = copy->next;
			i++;
		}
	}
	return (aux);
}
