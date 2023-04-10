#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, x, f, z;

	i = 0;
	d = 0;
	n = 0;
	x = 0;
	f = 0;
	z = 0;

	while (s[x] != '\0')
		x++;

	while (i < x && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			z = s[i] - '0';
			if (d % 2)
				z = -z;
			n = n * 10 + z;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);

	return (0);
}
