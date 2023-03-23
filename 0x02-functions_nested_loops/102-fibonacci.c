#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * Return: Always 0
 */

int main(void)
{
	int prev1 = 1, prev2 = 2, current, i;

	printf("%d %d ", prev1, prev2);

	for (i = 2; i < 50; i++)
	{
		current = prev1 + prev2;
		printf("%d ", current);
		prev1 = prev2;
		prev2 = current;
	}
	printf("\n");

	return (0);
}
