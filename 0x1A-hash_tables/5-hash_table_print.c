/**
 * hash_table_print - function prints hash table in the order
 * they appear in the array of the hash table
 * @ht: the hash table
 */
#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *tmp;
	hash_node_t *tmp_n;
	unsigned long int i;
	int flag = 0;

	if (ht != NULL)
	{
		tmp = ht;
		printf("{");
		for (i = 0; i < tmp->size; i++)
		{
			tmp_n = tmp->array[i];
			while (tmp_n != NULL)
			{
				if (flag == 0)
					flag = 1;
				else
					printf(", ");
				if (tmp_n->key)
					printf("\'%s\':", tmp_n->key);
				if (tmp_n->value)
				{
					printf(" \'%s\'", tmp_n->value);
				}
			tmp_n = tmp_n->next;
			}
		}
		printf("}\n");
	}
}




