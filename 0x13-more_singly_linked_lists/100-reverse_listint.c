/**
 *reverse_listint- function reverses nodes in a given linked list
 * @head: pointer to head argument
 *
 * Return: pointer to first node of the reversed list
 */
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *prev = NULL;

	while ((*head) != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = temp;
	}
	(*head) = prev;
	return (*head);
}
