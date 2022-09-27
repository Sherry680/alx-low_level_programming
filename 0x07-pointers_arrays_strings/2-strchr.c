#include "main.h"
/**
 * _strchr - locates the character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurence of character c
 */

char *_strchr(char *s, char c)
{
	int a = 0, i;

	while (s[a])
	{
		a++;
	}

	for (i = 0; i <= a; i++)
	{
		if (c == s[i])
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}
