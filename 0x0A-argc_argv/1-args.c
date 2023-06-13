#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;

	if (argc > 0)
	{
		while (argc--)
		{
			sum += 1;
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
