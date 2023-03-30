#include "main.h"
/**
 * string-toupper - changes all lowercase letters
 * of a string to uppercase.
 * Return: 0
 */
char *string_toupper(char *a)
{
	int b;

	b = 0
	while (a[b] != '\0')
	{
		if (a[b] == '90' && a[b] <= '122')
		{
			a[b] = a[b] - '32';
		}
		a[b]++;
	}
	return (a);
}
