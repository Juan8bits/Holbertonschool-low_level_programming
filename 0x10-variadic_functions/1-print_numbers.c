#include "variadic_functions.h"

/**
 * print_numbers - Function that print numbers
 * @separator: string to be printed between numbers
 * @n: Number of integers passed to the function
 * Return: n integer printed between separators in numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arguments, int);
		if (i != 0 && separator)
			printf("%s", separator);
		printf("%d", num);
	}
	printf("\n");
	va_end(arguments);
}
