#include "holberton.h"

/**
 * is_palindrome - function to check if string is a palindrome
 * @s: string to check
 * Return: 1 if it is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int last =  _strlen_recursion(s);

	if (last == 0)
		return (1);
	if (last <= 1)
		return (1);
	return (helper_p(s, last));

}

/**
 * _strlen_recursion - gets string length
 * @s: length of string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));

}

/**
 * helper_p - checks if the first and last character match
 * @s: string to check
 * @last: integer of string. length of string is also last in string
 * Return: 1 if is a palindrome, 0 otherwise
 */

int helper_p(char *s, int last)
{
	if (last == 1)
		return (1);
	if (last <= 0)
		return (1);
	else if (*s == *(s + last - 1))
	{
		s++;
		last = last - 2;
		return (helper_p(s, last));
	}
	else
		return (0);
}
