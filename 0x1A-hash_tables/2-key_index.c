/**
 * key_index - function gives you the index of a key
 * @key: key string
 * @size: array size
 *
 * Return: index at which the key/value pair should be stored in hash table
 * array
 */
#include "hash_tables.h"
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	if (size != 0)
	{
		index = hash % size;
		return (index);
	}
	return (-1);
}
