/**
 * add_node_end - function adds new node at the end of the list_t
 * @head: pointer to the last
 * @str: pointer to string argument
 *
 * Return: Address of new element or NULL if failed
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));
	list_t *templast = *head;
	char *sptr;

	if (newNode != NULL)
	{
		newNode->next = NULL;
		if ((*head) == NULL)
		{
			(*head) = newNode;
		}
		else
		{
			while (templast->next != NULL)
				templast = templast->next;
			templast->next = newNode;
		}
		if (str != NULL)
		{
			sptr = strdup(str);
			newNode->str = sptr;
			newNode->len = _strlen(sptr);
		}
		else
			sptr = NULL;
		return (newNode);
	}
	return (NULL);
}
/**
 * _strlen - function determines string length
 * @s: string pointer argument
 *
 * Return: string length
 */
unsigned int _strlen(char *s)
{

	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
