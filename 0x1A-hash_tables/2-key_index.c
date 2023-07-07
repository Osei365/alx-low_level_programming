#include "hash_tables.h"
/**
 * key_index - gives index of key
 * @key: key in question
 * @size: size of table
 * Return: index value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
