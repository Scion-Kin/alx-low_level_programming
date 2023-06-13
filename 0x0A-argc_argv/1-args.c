#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 0; i < argc; i++)
	{
		sum += 1;
	}
	printf("%d\n", sum - 1);
	return (0);
}
