#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
