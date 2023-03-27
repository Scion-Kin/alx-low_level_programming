#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char a = s[0];
	int b = 0;
	int i;

	while (s[b] != '\0')
	b++;
	for (i = 0; i < b; i++)
	{
		b--;
		rev = s[i];
		s[i] = s[b];
		s[b] = a;
	}
}
