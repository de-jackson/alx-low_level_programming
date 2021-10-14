#include "main.h"

/**
 * set_bit - A function that sets a bit at given index to 1
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
