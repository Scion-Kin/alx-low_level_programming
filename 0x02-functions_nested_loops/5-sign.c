#include "main.h"

/**
 * int print_sign(int n) - checks if number is positive, zero or negative
 * @n: is  a number
 * Return: 1 if greater than zero, 0 if equal to zero
 * -1 if less than zero
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48)
		return (0);
	}
}
