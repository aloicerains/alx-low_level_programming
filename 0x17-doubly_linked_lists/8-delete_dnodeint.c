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
			(*head) = temp->next;
			if (temp->next != NULL)
				temp->next->prev = NULL;
			free(tempx);
			return (1);
		}
		if (count == len - 1)
		{
			return (1);
		}
		if (count == index)
		{
			delete_atmiddle(temp);
			return (1);
		}
	}
	return (-1);
}
/**
 * delete_atend - function deletes node at the end
 * @head: pointer to the node to delete
 */
void delete_atend(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head->prev)
		head->prev->next = NULL;
	free(tmp);
}
/**
 * delete_atmiddle - function deletes node in the middle
 * @head: pointer to the middle node
 */
void delete_atmiddle(dlistint_t *head)
{
	dlistint_t *tmp = head;

	head->next->prev = head->prev;
	head->prev->next = head->next;
	free(tmp);
}
