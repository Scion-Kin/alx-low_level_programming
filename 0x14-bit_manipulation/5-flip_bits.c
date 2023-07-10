#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp = n ^ m;
	unsigned int i = 0;

	while (comp > 0)
	{
		if ((comp & 1) == 1)
			i++;
		comp >>= 1;
	}

	return (i);
}
