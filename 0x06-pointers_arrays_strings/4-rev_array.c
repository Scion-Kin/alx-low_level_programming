#include "main.h"
/**
 * reverse_array - reverses contents of the array
 * @a: input value
 * @n: input
 * Return: a
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = n; n >= 0; n--)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
