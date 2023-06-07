#include "main.h"

int str_length(char *s);
int is_palindrome_recursive(char *start, char *end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int length = str_length(s);
    return is_palindrome_recursive(s, s + length - 1);
}

/**
 * str_length - calculates the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int str_length(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + str_length(s + 1);
}

/**
 * is_palindrome_recursive - helper function to check if a string is a palindrome recursively
 * @start: the pointer to the start of the string
 * @end: the pointer to the end of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *start, char *end)
{
    if (start >= end)
        return 1;

    if (*start != *end)
        return 0;

    return is_palindrome_recursive(start + 1, end - 1);
}
