#include "search_algos.h"

/**
 * interpolation_search - Function that searches for a value in
 * sorted array of integers using the interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: Index where Value was find or -1 on failure.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;
	size_t middle;

	if (!array)
		return (-1);
	while (left <= right)
	{
		middle = left + (((double)(right - left) / (array[right] - array[left])))
			* (value - array[left]);
		if (middle < size)
			printf("Value checked array[%lu] = [%d]\n", middle, array[middle]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", middle);
			return (-1);
		}
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
			left = middle + 1;
	}
	return (-1);
}
