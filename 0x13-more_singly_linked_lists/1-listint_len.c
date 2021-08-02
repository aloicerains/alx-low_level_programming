/**
 * listint_len - function determines the length of linked list
 * @h: header pointer argument
 *
 * Return: The number of nodes
 */
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		elements++;
		temp = temp->next;
	}
	return (elements);
}
