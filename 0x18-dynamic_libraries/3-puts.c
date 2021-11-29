#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @s: input string to print.
 * Return: Nothing
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
