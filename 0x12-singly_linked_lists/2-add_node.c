/**
 * add_node - function creates a new node at the beginning of list_t
 * @head: pointer to the head
 * @str: pointer to string argument
 *
 * Return: Address of new element or NULL if failed
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));
	char *sptr;

	sptr = malloc(sizeof(*sptr));
	if (newNode != NULL)
	{
		newNode->next = *head;
		(*head) = newNode;
		if (str != NULL)
			sptr = strdup(str);
		newNode->str = sptr;
		newNode->len = _strlen(sptr);
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
