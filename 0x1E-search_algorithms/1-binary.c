#include "search_algos.h"

/**
 * print_arr - Function that print array of integers.
 * @arr: Pointer to array of integers.
 * @left: Minimal index value to start to print.
 * @right: Maximum index value to print.
 */
void print_arr(int *arr, int left, int right)
{
	int i = 0;

	if (arr)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			else
				printf(" ");
			printf("%d", arr[i]);
		}
		printf("\n");
	}
}

/**
 * binary_search - Function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: The value to search for.
 * Conditions_0: You can assume that array will be sorted in ascending order.
 * Conditions_1: You can assume that value wont appear more than once in array.
 * Return: First index where value is located, otherwise -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle;

	if (array && size)
	{
		while (left <= right)
		{
			print_arr(array, left, right);
			middle = (left + right) / 2;
			if (array[middle] == value)
				return (middle);
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
				left = middle + 1;
		}
	}
	return (-1);
}
