#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
