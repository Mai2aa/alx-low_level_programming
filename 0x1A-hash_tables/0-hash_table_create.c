#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - ctreates  ahash table
 * @size: size of it
 * Return: the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;

	return (hash_table);
}
