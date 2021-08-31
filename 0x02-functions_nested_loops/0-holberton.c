#include <unistd.h>
#include "holberton.h"

/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0 on success.
 */

int main(void)
{
	char c[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
