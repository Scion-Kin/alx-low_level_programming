#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
{
	int a;
	int b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
	return (0);
}
