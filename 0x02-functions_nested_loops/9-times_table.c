#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: No return
 */
void times_table(void)
{
	int b, c, d, e, f;
	for (d = 0; d <= 9; d++)
	{
		for (c = 0; c <= 9; c++)
		{
			e = d * c;
			if (e > 9)
			{
				b = e % 10;
				f = (e - b)/10;
				_putchar(f + 48);
				_putchar(b + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(e + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
