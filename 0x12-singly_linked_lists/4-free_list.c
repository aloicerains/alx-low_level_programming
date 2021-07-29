/**
 * free_list - function frees the malloc'ed list
 * @head: pointer to header to be freed
 *
 * Return: nothing
 */
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tmp = head;

		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
