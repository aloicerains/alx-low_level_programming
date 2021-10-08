/**
 * hash_table_set - function adds an element to the hash table
 * @ht: hash table you want to update
 * @key: key cannot be empty
 * @value: associated value to the key. Value must be duplicated
 * and can be empty string
 *
 * Return: 1 on success and 0 otherwise
 */
#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *new_node;
	hash_table_t *temp = ht;
	unsigned long int index;

	if (ht == NULL || strlen(key) == 0 || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = temp->array[index];
	temp->array[index] = new_node;
	return (1);
}


