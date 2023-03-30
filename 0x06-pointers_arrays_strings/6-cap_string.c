#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @a: Pointer
 * Return: a
 */
char *cap_string(char *a)
{
	int b;

	b = 0;
	while (a[b])
	{
		while (!(a[b] >= 'a' && a[b] <= 'z'))
		{
			b++;
		}
		if (a[b] == ' ' || a[b] == ',' || a[b] == ';' || a[b] == '.' || a[b] == '!' || a[b] == '?' || a[b] == '"' || a[b] == '\t' || a[b] == '(' || a[b] == '\n' || a[b] == ')' || a[b] == '{' || a[b] == '}' || b == 0 )
		{
			a[b] = a[b] - 32;
		}
		b++;
	}
	return (a);
}
