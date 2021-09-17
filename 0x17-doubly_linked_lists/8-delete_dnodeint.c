/**
 * delete_dnodeint_at_index - Function deletes nodes at index
 * @head: head address
 * @index: index of address that should be deleted
 *
 * Return: 1 success and -1 failed
 */
#include "lists.h"
#include "1-dlistint_len.c"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	unsigned int len = dlistint_len(*head);
	dlistint_t *temp = (*head);
	dlistint_t *tempx;

	if (temp == NULL || index > len - 1)
		return (-1);
	while (temp != NULL)
	{
		if (index == count)
			break;
		count++;
		temp = temp->next;
	}
	if (temp != NULL)
	{
		if (count == 0)
		{
			tempx = temp;
			temp = temp->next;
			if (temp->next != NULL)
				temp->next->prev = NULL;
			free(tempx);
			return (1);
		}
		if (count == len - 1)
		{
			tempx = temp;
			temp = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = NULL;
			free(tempx);
			return (1);
		}
		if (count == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
