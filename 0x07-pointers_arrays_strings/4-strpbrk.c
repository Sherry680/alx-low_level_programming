#include "main.h"
/**
 * _strpbrk - search a string for any of a set bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: the string since the first round of accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
