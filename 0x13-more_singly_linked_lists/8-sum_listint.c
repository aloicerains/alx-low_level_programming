/**
 *sum_listint - function gets nodes at a given index
 * @head: pointer to head argument
 *
 * Return: sum of the data in the linked list
 */
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
