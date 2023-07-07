#include "hash_tables.h"
/**
 * hash_table_delete - delete has table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *temp, *node;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a])
		{
			node = ht->array[a];
			while (node)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
