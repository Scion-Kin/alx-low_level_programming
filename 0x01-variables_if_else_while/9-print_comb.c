#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 57)
		{
			putchar('$');
			continue;
		}
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	return (0);
