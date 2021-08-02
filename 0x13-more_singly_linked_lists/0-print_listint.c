/**
 * print_listint - function prints linked list arguments
 * @h: header pointer argument
 *
 * Return: The number of nodes
 */
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		elements++;
		temp = temp->next;
	}
	return (elements);
}
