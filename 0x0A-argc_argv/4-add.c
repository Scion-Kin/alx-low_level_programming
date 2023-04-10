#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int a;

	a = 0;
	while (a < strlen(str))
	{
		if (!isdigit(str[a]))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c = 0;

	a = 1;
	while (a < argc)
	{
		if (check_num(argv[a]))
		{
			b = atoi(argv[a]);
			c += b;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		a++;
	}

	printf("%d\n", c);

	return (0);
}
