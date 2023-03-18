#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
