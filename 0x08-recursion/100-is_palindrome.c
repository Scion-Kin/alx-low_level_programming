#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	char a[100];

	if (*s == '\0')
		return;
	is_palindrome(s + 1);
	*a = *s;
	return (_strcmp(s, a));
}

/**
 * _strcmp - compares strings
 * @s: string one
 * @a:string two
 * return: 1 or 0
 */

int _strcmp(int *s, int *a)
{
	if (*s != *a)
		return (0);
	s++;
	a++;
	return(1);
}
