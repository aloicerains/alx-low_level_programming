/**
 * add_nodeint - function adds node at beginning of list_t
 * @head: pointer to current head reference
 * @n: integer data argument
 *
 * Return: address of the new element or NULL if it failed
 */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;

	newNode = malloc(sizeof(listint_t *));
	if (newNode)
	{
		newNode->n = n;
		newNode->next = (*head);
		(*head) = newNode;
		return (newNode);
	}
	return (NULL);
}
