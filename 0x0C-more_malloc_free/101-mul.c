#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit - checks if a string contains a non-digit char
 * @a: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *a)
{
	int b = 0;

	while (a[b])
	{
		if (a[b] < '0' || a[b] > '9')
			return (0);
		b++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @p: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *p)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int bef, char *befe[])
{
	char *a, *b;
	int o, p, q, r, s, t, u, *v, x = 0;

	a = befe[1], b = befe[2];
	if (bef != 3 || !is_digit(a) || !is_digit(b))
	{
		errors();
	}
	o = _strlen(a);
	p = _strlen(b);
	q = o + p + 1;
	v = malloc(sizeof(int) * q);
	if (!v)
	{
		return (1);
	}
	for (r = 0; r <= o + p; r++)
	{
		v[r] = 0;
	}
	for (o = o - 1; o >= 0; o--)
	{
		t = a[o] - '0';
		s = 0;
		for (p = _strlen(b) - 1; p >= 0; p--)
		{
			u = b[p] - '0';
			s += v[o + p + 1] + (t * u);
			v[o + p + 1] = s % 10;
			s /= 10;
		}
		if (s > 0)
		{
			v[o + p + 1] += s;
		}
	}
	for (r = 0; r < q - 1; r++)
	{
		if (v[r])
		{
			x = 1;
		}
		if (x)
		{
			_putchar(v[r] + '0');
		}
	}
	if (!x)
	{
		_putchar('0');
	}
	_putchar('\n');
	free(v);
	return (0);
}
