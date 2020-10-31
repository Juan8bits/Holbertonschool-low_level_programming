#include "lists.h"

/**
 * First_than_main - Function that prints something before main
 */

__attribute__((constructor))
void First_than_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
