/**
 * get_dnodeint_at_index - Function obtains the nth node of a linked list
 * @head: pointer to head
 * @index: index of node to return
 *
 * Return: an address of the node
 */
#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (head != NULL)
	{
		if (node == index)
			return (head);
		node++;
		head = head->next;
	}
	return (NULL);
}


