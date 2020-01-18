#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: the value associated with the element or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int h;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);
	h = key_index((const unsigned char *)key, ht->size);
	temp = (ht->array[h]);

	if (temp == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
