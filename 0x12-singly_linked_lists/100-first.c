#include <stdio.h>
#include "lists.h"

/**
 * first - prints the line before the main function executes
 * Return: Nothing
 */

void __attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
