#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates an hash table
 * @size: size of hash table allocated
 * Return: pointer to hash table or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int a;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		ht->array[a] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - inserts into hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *temp;
	char *dup_value;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = dup_value;
			return (1);
		}
		temp = temp->snext;
	}

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		free(dup_value);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(dup_value);
		free(node);
		return (0);
	}
	node->value = dup_value;
	node->next = ht->array[index];
	ht->array[index] = node;

	if (ht->shead == NULL)
	{
		node->snext = NULL;
		node->sprev = NULL;
		ht->shead = node;
		ht->stail = node;
	}

	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		node->sprev = temp;
		node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = node;
		else
			temp->snext->sprev = node;
		temp->snext = node;
	}

	return (1);
}

/**
 * shash_table_get - gets a value from hash table
 * @ht: hash table
 * @key: key in question
 * Return: value;
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->shead;
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - prints hash table
 * @ht: pointer to hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->shead;
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the reverse form of hash table
 * @ht: pointer to hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete has table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *node;

	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(ht->array);
	free(ht);
}
