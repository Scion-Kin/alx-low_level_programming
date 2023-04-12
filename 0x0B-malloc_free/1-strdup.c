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
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	bef = malloc(sizeof(char) * (a + 1));
	if (bef == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
	{
		bef[b] = str[b];
	}
	return (bef);
}
