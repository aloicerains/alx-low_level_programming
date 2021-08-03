/**
 *delete_nodeint_at_index - function deletes node at a given index
 * @head: pointer to head argument
 * @index: index of the noe to be deleted
 *
 * Return: 1 success, -1 failure
 */
#include <stdio.h>
#include <stdlib.h>
#include "1-listint_len.c"
#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = (*head);
	listint_t *prev = NULL;
	unsigned int count = 0;
	unsigned int len = listint_len(*head);

	while (tmp != NULL && index != count)
	{
		prev = tmp;
		count++;
		tmp = tmp->next;
	}
	if (tmp == NULL || index > len)
		return (-1);
	if (count == 0)
	{
		(*head) = tmp->next;
		free(tmp);
		return (1);
	}
	prev->next = tmp->next;
	free(tmp);
	return (1);
}
