/**
 * hash_table_create - function creates a hash table
 * @size: size of the array for the hash table
 *
 * Return: Pointer to the newly created hash table, or NULL incase of failure
 */
#include "hash_tables.h"
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	unsigned long int i = 0;

	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht || size == 0)
		return (NULL);
	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_ht->array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new_ht->array[i] = NULL;
	}
	return (new_ht);
}
