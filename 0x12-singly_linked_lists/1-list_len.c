/**
 * list_len - function returns no of elements of list_t
 * @h: pointer to the head
 *
 * Return: the number of nodes in the list
 */
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
size_t list_len(const list_t *h)
{
	size_t elements = 0;
	const list_t *temp = h;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		elements++;
		temp = temp->next;
	}
	return (elements);
}
