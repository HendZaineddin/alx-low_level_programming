#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print the name.
 * @name: the name.
 * @f: the pointer to function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
