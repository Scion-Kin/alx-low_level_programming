#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 * Retun: Always 0
 */

void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a == 50 || a == 52)
		{
			continue;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
