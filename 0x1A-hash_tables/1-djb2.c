#include "hash_tables.h"
/**
 * hash_djb2 - hashing algorithm by dan bernstei
 * @str: The key to set/get in the hash table.
 * Return: hashed value
 * https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
