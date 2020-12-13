#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data (n) of
 * a dlistint_t linked list.
 * @head: Pointer with address to first node to list.
 * Return: Sum of all the data n, if the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *copy;

	copy = head;
	for (sum = 0; copy; sum += copy->n, copy = copy->next)
		;
	return (sum);
}
