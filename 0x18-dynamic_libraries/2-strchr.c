#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to first occurence of character c
 * or NULL if character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	return (NULL);
}
