#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
