/**
 *get_nodeint_at_index  - function gets nodes at a given index
 * @head: pointer to head argument
 * @index: node index
 *
 * Return: pointer to node at index
 */
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int count = 0;

	while (tmp != NULL)
	{
		if (index == count)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
