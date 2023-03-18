#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 97; a <= 102; a++)
	{
		putchar(a);
		a++;
	}
	for (b = 49; a <= 57; b++)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
