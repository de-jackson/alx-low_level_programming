#include "main.h"

/**
 * _strncpy - copies a string up to n
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	srclen++;
	if (n > srclen)
	{
		n = srclen;
	}
	src = start;
	for (; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (temp);
}
