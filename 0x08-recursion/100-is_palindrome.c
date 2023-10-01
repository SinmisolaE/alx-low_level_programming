#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks for a palindrome
 * @s: the string
 * Return: 1 if true, else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of string
 * @s: string to cal length
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks character recursivly for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome, else 0
 */
int check_pal(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (*(s + i) != *(s + len - 1))
		return (0);
	return (check_pal(s, i + 1, len - 1));
}
