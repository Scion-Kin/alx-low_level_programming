#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0 
 */

int main(void)
{
	int a = 97;
	
	while (a < 122)
	{
		putchar(a);
		a++;
		putchar('\n');
	}
	return (0);
}
