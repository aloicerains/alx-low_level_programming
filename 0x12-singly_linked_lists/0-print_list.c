/**
 * print_list - function prints all elements of list_t
 * @h: pointer to the head
 *
 * Return: the number of nodes in the list
 */
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
size_t print_list(const list_t *h)
{
	size_t elements = 0;
	const list_t *temp = h;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
	elements++;
	temp = temp->next;
	}
	return (elements);
}
