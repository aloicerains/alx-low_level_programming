/**
 * print_dlistint - function prints all the elements of the dlistint_t
 * @h: pointer to head element
 *
 * Return: number of nodes
 */
#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
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
			printf("%d\n", head->n);
			elements++;
			head = head->next;
		}
	}
	return (elements);
}
