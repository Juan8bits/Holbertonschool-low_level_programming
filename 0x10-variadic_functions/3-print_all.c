#include "variadic_functions.h"

/**
 * print_all - Function that prints anything with variadic function
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	data typed[] = {
		{"c", typechar},
		{"i", typeinteger},
		{"f", typefloat},
		{"s", typestring},
		{"\0", NULL}
	};
	int i, j;
	char *separator = "";

	va_start(arguments, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 5)
		{
			if (*typed[j].string == format[i])
			{
				printf("%s", separator);
				typed[j].function(arguments);
				separator = ", ";
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
 * typestring - Function that prints char-type arguments.
 * @arguments: list of types of arguments passed to the function
 */
void typestring(va_list arguments)
{
	char *p = NULL;

	p = va_arg(arguments, char *);
	if (p == NULL)
		p = "(nil)";
	printf("%s", p);
}
