#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *bef;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	while (s1 && s1[c])
		c++;
	while (s2 && s2[d])
		d++;

	if (n < d)
		s = malloc(sizeof(char) * (c + n + 1));
	else
		s = malloc(sizeof(char) * (c + d + 1));

	if (!bef)
		return (NULL);

	while (a < c)
	{
		bef[a] = s1[a];
		a++;
	}

	while (n < d && i < (c + n))
		s[a++] = s2[b++];

	while (n >= d && a < (c + d))
		bef[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
