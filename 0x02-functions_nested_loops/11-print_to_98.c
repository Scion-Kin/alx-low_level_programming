#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = 0; n >= 98; n--)
		{
			printf("%d", n);
			printf(", ");
		}
	}
	else if (n >= 0 && n <=98)
	{
		for (n = 0; n <= 98; n++)
		{
			printf("%d", n);
			printf(", ");
		}
	}
	
	else 
	{
		for (n < 0; n <= 98; n++)
		{
			printf("%d", n);
			printf(", ");
		}
	}
	printf("\n");
}
