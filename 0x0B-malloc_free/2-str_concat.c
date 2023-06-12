#include <stdlib.h>
#include "main.h"

int get_length(char *str);

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *joined;
	int i = 0, j = 0, k, l;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		j = get_length(s2);
		joined = malloc((j + 1) * sizeof(char));
		if (joined == NULL)
			return (NULL);
		for (l = 0; l <= j; l++)
			joined[l] = s2[l];
		joined[l] = '\0';
		return (joined);
	}
	if (s2 == NULL)
	{
		i = get_length(s1);
		joined = malloc((i + 1) * sizeof(char));
		if (joined == NULL)
			return (NULL);
		for (k = 0; k <= i; k++)
			joined[k] = s1[k];
		joined[k] = '\0';
		return (joined);
	}
	i = get_length(s1);
	j = get_length(s2);
	joined = malloc((i + j + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
		joined[k] = s1[k];
	for (l = 0; l <= j; l++)
		joined[k++] = s2[l];
	joined[k] = '\0';
	return (joined);
}
/**
 * get_length - gets length
 * @str: string
 * Return: length
 */
int get_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}
