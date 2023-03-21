#include "main.h"

/**
 * _isalpha(int c) - checks if letter is upper or lowercase
 * c is a reference to the ascii code
 * Return: 1 (Yes), 0 (No)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122) || (c >= 65 && c <= 90)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}
