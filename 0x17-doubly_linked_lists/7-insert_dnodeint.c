/**
 * insert_dnodeint_at_index - Function inserts node a given index
 * @h: head pointer
 * @idx: index of the list where node is to be added
 * @n: data element being added
 *
 * Return: address of the new node or null if failed
 */
#include "lists.h"
#include "1-dlistint_len.c"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int node_c = 0;
	unsigned int list_len;
	dlistint_t *new_node = NULL;
	dlistint_t **temp = h;
	dlistint_t *temp1 = (*h);

	if ((*h) == NULL && idx == node_c)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	list_len = dlistint_len(temp1);
	while ((*temp) != NULL)
	{
		if (idx == 0)
			return (add_dnodeint(temp, n));
		if (idx == list_len)
			return (add_dnodeint_end(temp, n));
		if (idx == node_c)
		{
			return (input_index(h, (*temp), n));
		}
		node_c++;
		(*temp) = (*temp)->next;
	}
	return (NULL);
}
/**
 * input_index - function insert node at index
 * @head: head pointer
 * @next: next pointer
 * @n: data element
 *
 * Return: address
 */
dlistint_t *input_index(dlistint_t **head, dlistint_t *next, int n)
{
	dlistint_t *new_node = NULL;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->prev = next->prev;
		new_node->next = next;
		next->prev = new_node;
		if (new_node->prev != NULL)
		{
			new_node->prev->next = new_node;
		}
		else
		{
			(*head) = new_node;
		}
		return (new_node);
	}
	return (NULL);
}

