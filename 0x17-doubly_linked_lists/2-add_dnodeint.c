/**
 * add_dnodeint - function adds a new node at the beginning of a dlistint_t
 * @h: pointer to a node element
 * @n: data element for the new node
 *
 * Return: address of the new element or null if it failed
 */
#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = (*h);
		new_node->prev = NULL;
		if ((*h) != NULL)
			(*h)->prev = new_node;
		(*h) = new_node;
		return (new_node);
	}
	return (NULL);
}

