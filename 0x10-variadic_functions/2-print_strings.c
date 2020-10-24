#include "variadic_functions.h"

/**
 * print_strings - Function that prints strinf with variadic function, followed
 * by a new line.
 * @separator: String to be printed between the strings
 * @n: Arguments number.
 * Return: (nil) or strings separated with separator string.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *p; /* adress to item list */

	va_start(arguments, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				if (separator != NULL)
					printf("%s", separator);
			}
			p = va_arg(arguments, char*);
			if (p != NULL)
				printf("%s", p);
			else
				printf("(nil)");
		}
		printf("\n");
		va_end(arguments);
	}
}
