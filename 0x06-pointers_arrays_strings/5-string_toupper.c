#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a  string
 * @s: an input string
 * Return: char pointer to converted string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
