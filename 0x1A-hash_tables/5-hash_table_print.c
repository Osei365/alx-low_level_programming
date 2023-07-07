#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a, ender = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		node = ht->array[a];
		while (node)
		{
			if (ender != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node != NULL)
				printf(", ");
			ender = 1;
		}
	}
	printf("}\n");
}
