/**
 * hash_table_get - function retrieves value associated with a key
 * @ht: hash table to be looked into
 * @key: key to be searched
 *
 * Return: Value associated with the element or NULL if key was missing
 */
#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
