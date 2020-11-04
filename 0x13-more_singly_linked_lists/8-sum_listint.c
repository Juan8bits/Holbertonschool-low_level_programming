#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data (n) of a list.
 * @head: Pointer with address to head of list.
 * Return: Summation of a list content.
 */
int sum_listint(listint_t *head)
{
	int summatory;

	summatory = 0;
	if (head)
	{
		while (head)
		{
			summatory += head->n;
			head = head->next;
		}
	}
	return (summatory);
}
