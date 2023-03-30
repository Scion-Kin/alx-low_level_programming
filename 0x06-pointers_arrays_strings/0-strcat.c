#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * *dest: string one
 * *src: string two
 * Return:vpointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *p;

	p = &dest;
	p = _strcat(dest, src);
	return (p);
}
