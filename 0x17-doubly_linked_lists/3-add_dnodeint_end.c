/**
 * add_dnodeint_end - function adds a new node at the end of a dlistint_t
 * @head: pointer to a node element
 * @n: data element for the new node
 *
 * Return: address of the new element or null if it failed
 */
#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *last_node = (*head);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		if ((*head) == NULL)
		{
			new_node->prev = NULL;
			(*head) = new_node;
			return (new_node);
		}
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->prev = last_node;
		return (new_node);
	}
	return (NULL);
}

