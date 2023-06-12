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
	char *joined;
	int i = 0, j = 0, k, l;

	if (s1 == NULL)
		s1 = "";
	while(s1[i] != '\0')
		i++;
	if (s2 == NULL)
		s2 = "";
	while(s2[j] != '\0')
		j++;
	joined = malloc((i + j + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
		joined[k] = s1[k];
	for (l = 0; l <= j; l++)
		joined[k++] = s2[l];
	return(joined);
}
