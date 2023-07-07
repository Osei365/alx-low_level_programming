#include "hash_tables.h"
/**
 * hash_table_set - inserts into hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *dup_value;
	unsigned long int index, a;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = dup_value;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(dup_value);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = dup_value;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
