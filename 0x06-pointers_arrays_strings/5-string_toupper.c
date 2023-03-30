#include "main.h"
/**
 * string-toupper - changes all lowercase letters
 * of a string to uppercase.
 * @a: input
 * Return: a
 */
char *string_toupper(char *a)
{
	int b;

	b = 0
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
