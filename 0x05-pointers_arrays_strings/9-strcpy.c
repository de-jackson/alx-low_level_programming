#include "main.h"

/**
 * *_strcpy - copies string pointed to by src to buffer pointed to by dest
 * @dest: the pointer to a string
 * @src: the pointer to a buffer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (temp);
}
