#include "function_pointers.h"

/**
 * int_index - write a function that searches for an integer in array.
 * @array: Array given to search an integer.
 * @size: Size of the array given
 * @cmp: pointer to function.
 * Return: 0 if size <= 0, -1 if no element matches or first element
 * for which the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned short int iterator;

	if (array && size && cmp)
	{
		for (iterator = 0; iterator < size; iterator++)
		{
			if (cmp(array[iterator]) == 1)
				return (iterator);
		}
	}
	return (-1);
}
