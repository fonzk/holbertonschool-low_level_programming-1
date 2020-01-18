#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key to set
 * @value: value to set
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int h;
	hash_node_t *new;

	if (key == NULL)
		return (0);

	h = key_index((const unsigned char *)key, ht->size);

	if (ht->array[h] != NULL && strcmp(ht->array[h]->key, key) == 0)
	{
		ht->array[h]->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[h];
	ht->array[h] = new;

	return (1);
}
