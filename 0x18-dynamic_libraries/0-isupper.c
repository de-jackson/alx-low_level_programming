#include "main.h"

/**
 * _isupper - tests whether a character is a
 * uppercase letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if c is uppercase letter, otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
