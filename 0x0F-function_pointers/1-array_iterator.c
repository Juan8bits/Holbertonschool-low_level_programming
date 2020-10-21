#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a parameter on
 * each element of an array.
 * @array: Array given.
 * @size: Array size.
 * @action: Pointer to function to aply.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterator;

	if (size && array && action)
	{
		for (iterator = 0; iterator < size; iterator++)
		{
			action(array[iterator]);
		}
	}
}
