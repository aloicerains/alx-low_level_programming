/**
 * dlistint_len - function determines the elements of the dlistint_t
 * @h: pointer to head element
 *
 * Return: number of nodes in the linked list
 */
#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head;
	size_t elements = 0;

	if (h != NULL)
	{
		if (h->prev != NULL)
		{
			while (h->prev != NULL)
			{
				head = h->prev;
			}
		}
		else
			head = h;
		while (head != NULL)
		{
			elements++;
			head = head->next;
		}
	}
	return (elements);
}
