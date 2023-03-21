#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: No return
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			if (b = 10)
			{
				continue;
			}
			for (d = 0; d <= 9; d++)
			{
				for (c = 0; c <= 9; c++)
				{
					e = d * c;
					_putchar(e + 48);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');

				}
			}
		}
		_putchar('\n');
	}
}
