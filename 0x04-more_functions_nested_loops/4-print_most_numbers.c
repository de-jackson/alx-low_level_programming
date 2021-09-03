#include "main.h"

/**
 * print_most_numbers - print all numbers except 2 and 4
 *
 * Return: 0 on success.
 */

void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}

	}
	_putchar('\n');
}
