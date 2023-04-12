#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one
 * @s2: input two
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *bef;
	int a, b;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = b = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	bef = malloc(sizeof(char) * (a + b + 1));
	if (bef == NULL)
	{
		return (NULL);
	}
	a = b = 0;
	while (s1[a] != '\0')
	{
		bef[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		beff[a] = s2[b];
		a++, b++;
	}
	bef[a] = '\0';
	return (bef);
}
