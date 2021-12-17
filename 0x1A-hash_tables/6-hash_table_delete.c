#include "hash_tables.h"

/**
 * hash_table_delete - A function that frees a hash table.
 * @ht: The pointer to hash table to delete.
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp_node;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("First for loop\n");
			while (ht->array[i])
			{
				printf("Freeing\n");
				tmp_node = ht->array[i];
				free(tmp_node->key);
				tmp_node->key = NULL;
				free(tmp_node->value);
				tmp_node->value = NULL;
				ht->array[i] = ht->array[i]->next;
				free(tmp_node);
				tmp_node = NULL;
			}
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
	printf("Leaving\n");
}
