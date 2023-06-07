#include "main.h"

int prime(int n, int a);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
/**
 * prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @a: iterator
 * Return: 1 if n is prime, 0 if not
 */
int prime(int n, int a)
{
	if (n % a = 0 && (a != 1 || a != n))
		return (0);
	if (n % a = 0 && (a == 1 || a == n))
		return (1);
	return (prime(n, a - 1));
}
