#include "hash_tables.h"
/**
 * key_index - function that gives you index of a key
 * @key: key to return index of after running through hash_djb2()
 * @size: size of the array in hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

/* Element is converted into an integer */
	i = hash_djb2(key);

/* works b/c hash is a fixed size, is reduced to an index depending on size */
	return (i % size);
}
