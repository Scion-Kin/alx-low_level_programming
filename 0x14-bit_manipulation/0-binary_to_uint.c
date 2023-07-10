#include "main.h"

/**
 * binary_to_uint - converts binary to number of type unsigned int
 * @b: binary in a string
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i = (i * 2) + (*b - '0');
	}
	return (i);
}
