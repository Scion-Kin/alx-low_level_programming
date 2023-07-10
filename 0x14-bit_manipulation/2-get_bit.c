#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check
 * @index: index of the bit
 * Return: value of the bit at index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1UL << index;
	int bit_value = (n & mask) != 0;

	return bit_value;
}
