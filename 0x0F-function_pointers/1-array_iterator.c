#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: input array
 * @size: size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (; i < size; i++)
	{
		action(array[i]);
	}
}
