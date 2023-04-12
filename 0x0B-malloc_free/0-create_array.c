#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char bef;
	unsigned int a;

	bef = malloc(sizeof(char) * size);
	if (size == 0 || bef == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		bef[a] = c;
	}
	return (bef);
}
