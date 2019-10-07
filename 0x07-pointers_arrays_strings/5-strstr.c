#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string to search
 * @needle: substring to search for within string
 * Return: pointer to start of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{

		char *b = haystack;
		char *p = needle;

		while (*haystack && *p && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (b);
		haystack = b + 1;
	}
	return ('\0');
}
