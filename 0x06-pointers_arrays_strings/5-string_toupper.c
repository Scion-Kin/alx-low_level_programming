#include "main.h"
/**
 * string-toupper - changes all lowercase letters
 * of a string to uppercase.
 * Return: 0
 */
char *string_toupper(char *a)
{
	int b;
	int c;

	while (a[b] != '\0')
	{
		if (a[b] == '90' && c >= '122')
		{
			c = a[b] - '32';
		}
		a[b]++;
	}
	return (c);
}
