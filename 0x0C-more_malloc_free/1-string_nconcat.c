#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of string
 * two to string one
 * @s1: String one
 * @s2: String two
 * @n: bytes to concatenate
 * Return: pointer to result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	t = malloc((i + n + 1) * sizeof(char));
	if (t == NULL)
		return (NULL);
	if (n >= j)
		n = j;
	while (s1[k] != '\0')
	{
		t[k] = s1[k];
		k++;
	}
	while (l < n)
	{
		t[k] = s2[l];
		k++;
		l++;
	}
	t[k] = '\0';
	return (t);
}
