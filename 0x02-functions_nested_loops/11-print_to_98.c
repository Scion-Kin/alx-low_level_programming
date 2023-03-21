#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = 0; i <= 98; i++)
		{
			printf("%d", i);
			printf(", ");
		}
	}
	else if (n <= 0 && n <=98)
	{
		for (i = 0; i <= 98; i++)
		{
			printf("%d", i);
			printf(", ");
		}
	}
	
	else 
	{
		for (i = 0; i > 98; i--)
		
		{
			printf("%d", i);
			printf(", ");
		}
	}
	printf("\n");
}
