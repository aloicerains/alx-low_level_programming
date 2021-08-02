/**
 * pop_listint - function frees list created
 * @head: pointer to head argument
 *
 * Return: head nodes data n
 */
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *tmp = (*head);
	int data;

	if ((*head) != NULL)
	{
		data = tmp->n;
		(*head) = tmp->next;
		free(tmp);
		return (data);
	}
	return (0);
}
