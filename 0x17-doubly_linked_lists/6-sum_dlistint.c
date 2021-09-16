/**
 * sum_dlistint - Funtion sums all the data in the list
 * @head: head pointer
 *
 * Return: Sum of the data in the list
 */
#include "lists.h"
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head->n)
			sum += head->n;
		head = head->next;
	}
	return (sum);
}
