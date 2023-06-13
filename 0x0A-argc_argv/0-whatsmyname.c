#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector(but I like volt! haha)
 * Return: 0 is success
 */

int main(int argc, int *argv[])
{
	int i = 0;

	if (argc > 0)
		printf("%s\n", argv[i]);
	return (0);
}
