#include "variadic_functions.h"

/**
 * print_numbers -
 * @separator: string to be printed between numbers
 * @n: Number of integers passed to the function
 * Return: n integer printed between separators in numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	if (separator != NULL && n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
				printf("%s", separator);
			printf("%d", va_arg(arguments, int));
		}
		va_end(arguments);
		printf("\n");
	}
}
