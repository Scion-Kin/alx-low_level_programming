#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **bef, *beff;
	int a, b = 0, c = 0, d, e = 0, f, g;

	while (*(str + c))
		c++;
	d = count_word(str);
	if (d == 0)
		return (NULL);

	bef = (char **) malloc(sizeof(char *) * (d + 1));
	if (bef == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= c; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (e)
			{
				g = a;
				beff = (char *) malloc(sizeof(char) * (e + 1));
				if (beff == NULL)
					return (NULL);
				while (f < g)
					*beff++ = str[f++];
				*beff = '\0';
				bef[b] = beff - e;
				b++;
				e = 0;
			}
		}
		else if (e++ == 0)
			f = a;
	}
	bef[b] = NULL;
	return (bef);
}
