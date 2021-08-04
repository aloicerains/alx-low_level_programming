/**
 *insert_nodeint_at_index - function inserts node at a given index
 * @head: pointer to head argument
 * @idx: index of the list where new node is to be added
 * @n: Data argument for initialization
 *
 * Return: Address of new node or null incase of failure.
 */
#include <stdio.h>
#include <stdlib.h>
#include "1-listint_len.c"
#include "2-add_nodeint.c"
#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = NULL;
	listint_t *tmp1 = NULL;
	unsigned int len;
	unsigned int count;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (head != NULL)
	{
		tmp = (*head);
		tmp1 = (*head);
		len = listint_len(tmp);
		count = 1;
		while (tmp1 != NULL && newNode != NULL)
		{
			if (idx == 0)
				return (add_nodeint(head, n));
			if (idx == len)
				return (add_nodeint_end(head, n));
			if (idx == count)
			{
				newNode->n = n;
				newNode->next = tmp1->next;
				tmp1->next = newNode;
				return (newNode);
			}
		count++;
		tmp1 = tmp1->next;
		}
	}
	free(newNode);
	return (NULL);
}
