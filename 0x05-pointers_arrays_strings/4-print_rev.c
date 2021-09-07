#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * @s: an input string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}

