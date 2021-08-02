/**
 * free_listint - function frees list created
 * @head: pointer to head argument
 *
 * Return: nothing
 */
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free (tmp);
	}
}
