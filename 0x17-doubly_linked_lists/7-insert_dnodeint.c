/**
 * insert_dnodeint_at_index - Function inserts a new node at a given position
 * @h: pointer to head
 * @idx: index location
 * @n: data element
 *
 * Return: address of new node or null if failed
 */
#include "lists.h"
#include "1-dlistint_len.c"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp = (*h);
	unsigned int len;
	dlistint_t *new_node = NULL;

	len = dlistint_len(temp);
	if (temp == NULL && idx == 0)
		return (add_dnodeint(h, n));
	else if (temp == NULL && idx == len)
		return (add_dnodeint_end(h, n));
	while (temp != NULL)
	{
		if (idx == 0)
			return (add_dnodeint(&temp, n));
		else if (idx == len)
			return (add_dnodeint_end(&temp, n));
		if (idx == count)
		{
			new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->prev = temp->prev;
			temp->prev = new_node;
			new_node->next = temp;
			if (new_node->prev != NULL)
				new_node->prev->next = new_node;
			else
				temp = new_node;
			return (new_node);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
