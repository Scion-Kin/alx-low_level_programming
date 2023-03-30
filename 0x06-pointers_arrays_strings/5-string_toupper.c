#include "main.h"
/**
 * string-toupper - changes all lowercase letters
 * of a string to uppercase.
 * Return: 0
 */
char *string_toupper(char *a)
{
	int b;

	while (a[b] != '\0')
	{
		if (a[b] == 'a' && a[b] <= 'z')
		{
			a[b] = a[b] - 32;
		}
		a[b]++;
	}
	return (a);
}
