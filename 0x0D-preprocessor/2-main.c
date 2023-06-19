#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the file it was compiled from
 * Return: 0 is Success
 */

int main(void)
{
	printf("%s", __FILE__);
	return (0);
}
