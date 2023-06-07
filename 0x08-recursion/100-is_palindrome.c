#include "main.h"

int _strcmp(char *s, char *a);
int len(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    char a[100];

    if (*s == '\0')
        return 1;

    is_palindrome(s + 1);
    *a = *s;
    return _strcmp(s, a) != 0;
}

/**
 * len - calculates the length of a string
 * @s: input string
 *
 * Return: length of the string
 */
int len(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + len(s + 1);
}

/**
 * _strcmp - compares two strings
 * @s: first string
 * @a: second string
 *
 * Return: 0 if the strings are equal, non-zero otherwise
 */
int _strcmp(char *s, char *a)
{
    if (len(s) != len(a))
        return 0;
    if (*s != *a)
        return 0;
    if (*s == '\0')
        return 1;
    return _strcmp(s + 1, a + 1);
}
