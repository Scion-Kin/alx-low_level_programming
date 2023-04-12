#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returning a duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *bef;
	int a, b;
	if (str == NULL)
	{
		return (NULL);
	}
	bef = malloc(sizeof(char) * (a + 1));
	a = 0;
	while (str[a] != '\0')
	{
		for (b = 0; b <= str[a]; b++)
		{
			bef[b] = str[a];
		}
		a++;
	}
	if (bef == NULL)
	{
		return (NULL);
	}
	return (bef);
}
