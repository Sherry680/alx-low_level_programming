#include "main.h"
/**
 * _strchr - locates the character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurence of character c
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; (s[a] != c) && (s[a] != '\0'); a++)
		;
	if (s[a] == c)
		return (s + a);
	else
		return (NULL);
}
