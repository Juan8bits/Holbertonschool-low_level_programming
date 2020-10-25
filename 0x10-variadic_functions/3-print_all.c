#include "variadic_functions.h"

/**
 * print_all - Function that prints anything with variadic function
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	data typed[] = {
		{"c", typechar},
		{"i", typeinteger},
		{"f", typefloat},
		{"s", typestring},
		{NULL, NULL}
	};
	int i, j;
	va_list arguments;

	va_start(arguments, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*typed[j].string == format[i])
			{
				if (i)
					printf(", ");
				typed[j].function(arguments);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}
/**
 * typechar - Function that prints char type arguments.
 * @arguments: list of types of arguments passed to the function
 */
void typechar(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}
/**
 * typeinteger - Function that prints char type arguments.
 * @arguments: list of types of arguments passed to the function
 */
void typeinteger(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}
/**
 * typefloat - Function that prints char type arguments.
 * @arguments: list of types of arguments passed to the function
 */
void typefloat(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}
/**
 * typestring - Function that prints char type arguments.
 * @arguments: list of types of arguments passed to the function
 */
void typestring(va_list arguments)
{
	char *p = NULL;

	p = va_arg(arguments, char *);
	printf("%s", p = NULL ? "(nil)" : p);
}
