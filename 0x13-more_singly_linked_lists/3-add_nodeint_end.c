/**
 * add_nodeint_end - function adds node at the end of list_t
 * @head: pointer to current head reference
 * @n: integer data argument
 *
 * Return: address of the new element or NULL if it failed
 */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL;
	listint_t *tmp = (*head);

	newNode = malloc(sizeof(listint_t));
	if (newNode)
	{
		newNode->n = n;
		newNode->next = NULL;
		if ((*head) == NULL)
		{
			(*head) = newNode;
			return (newNode);
		}
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newNode;
		return (newNode);
	}
	return (NULL);
}
