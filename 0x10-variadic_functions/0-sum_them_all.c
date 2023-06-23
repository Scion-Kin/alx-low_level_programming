#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates sum of arguments
 * @n: first argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int total = 0;
	unsigned int num, i;

	if (n == 0)
		return (0);
	va_list args;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		total += num;
	}
	va_end(args);
	return (total);
}
