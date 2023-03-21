#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer value
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				continue;
			}
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				continue;
			}
			printf("%d, ", i);
		}
		printf("\n");
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			if (i == 98)
			{
				continue;
			}
			printf("%d, ", i);
		}
		printf("\n");
	}
}
