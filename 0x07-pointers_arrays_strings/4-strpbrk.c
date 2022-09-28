#include "main.h"
/**
 * _strpbrk - search a string for any of a set bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: the string since the first round of accepted character
 */
char *_strbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == acccept[j])
			{
				s += i;
				return (s);
			}

			j++;
		}
		i++;
	}
	return ('\0');
}
