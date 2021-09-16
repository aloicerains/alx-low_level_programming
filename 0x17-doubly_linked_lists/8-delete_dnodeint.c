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

	if (temp == NULL || index > len)
		return (-1);

	while ((*head) != NULL && index != count)
	{
		if (index == 0)
		{
			(*head) = temp->next;
		}
		else if (index == count)
		{
			(*head)->next->prev = (*head)->prev;
		}
		if ((*head)->prev != NULL)
			(*head)->prev->next = temp->next;
		count++;
		(*head) = (*head)->next;
	}
	free(*head);
	return (1);
}


