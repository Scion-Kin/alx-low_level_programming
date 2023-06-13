#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else if (argc == 2)
	{
		printf("%s\n", argv[1]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
