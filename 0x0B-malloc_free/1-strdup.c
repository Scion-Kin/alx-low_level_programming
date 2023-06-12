#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: input string
 * Return: pointer to s
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	s = malloc((j + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
		s[i] = str[i];
	return (s);
}
