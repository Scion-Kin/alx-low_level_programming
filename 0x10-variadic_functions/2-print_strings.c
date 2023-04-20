#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	char *b;
	unsigned int c;

	va_start(a, n);

	for (c = 0; c < n; c++)
	{
		b = va_arg(a, char *);

		if (b == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", b);
		}
		if (c != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(a);
}
