/**
 * hash_table_delete - function deletes hash table
 * @ht: the hash table
 */
#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *tmp;
	hash_node_t *tmp_d, *tmp_n;
	unsigned long int i;

	if (ht != NULL)
	{
		tmp = ht;
		for (i = 0; i < tmp->size; i++)
		{
			tmp_n = tmp->array[i];
			while (tmp_n != NULL)
			{
				tmp_d = tmp_n;
				free(tmp_d->value);
				free(tmp_d->key);
				free(tmp_d);
				tmp_n = tmp_n->next;

			}
		}
		free(ht->array);
		free(ht);
	}
}




