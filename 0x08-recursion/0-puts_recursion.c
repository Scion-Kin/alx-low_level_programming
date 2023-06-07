#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: input
 * return: void
 */
 
 void _puts_recursion(char *s)
 {
	int k;
	
	k = s[k];
	 
 	_putchar(k);
 	k++;
 	_puts_recursion(k);
 	if (k == NULL)
 	{
 		_putchar('\n');
 	}
 }
