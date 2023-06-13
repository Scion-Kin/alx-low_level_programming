#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector(but I like volt! haha)
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
		exit (1);
	return (0);
}
