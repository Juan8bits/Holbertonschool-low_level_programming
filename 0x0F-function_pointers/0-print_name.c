#include "function_pointers.h"

/**
 * print_name - Function that print a name
 * @name: Name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(f)(name);
}
