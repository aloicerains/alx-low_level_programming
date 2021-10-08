/**
 * hash_djb2 - hash function
 * @str: constant character string key
 *
 * Return: hash value
 */
#include "hash_tables.h"
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
