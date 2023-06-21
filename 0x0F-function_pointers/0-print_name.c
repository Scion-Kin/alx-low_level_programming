#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints the name of the function
 * return: function pointer
 * @name: name of the function
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
