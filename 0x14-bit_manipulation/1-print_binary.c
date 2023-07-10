#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (mask)
	{
		if (n & mask)
		{
			printf("1");
			flag = 1;
		}
		else if (flag)
		{
			printf("0");
		}

		mask >>= 1;
	}
}
