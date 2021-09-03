#include "main.h"

/**
 * print_number - prints a number
 * @n: Input number
 * Return: Nothing
 */

void print_number(int n)
{
	int res, temp, expo;

	if (n < 0)
	{
		res = n * -1;
		_putchar(45);
	}
	else
	{
		res = n;
	}

	temp = res;
	expo = 1;
	while (temp >= 10)
	{
		temp /= 10;
		expo *= 10;
	}

	for (; expo >= 1; expo /= 10)
	{
		_putchar(((res / expo) % 10) + 48);
	}
}
