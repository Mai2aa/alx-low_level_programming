#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - retrives a value associated with the key
 * @ht: ponter to the hash table
 * @key: key
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}
	
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		
		current = current->next;
	}

	return (NULL);
}
