#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: first input char
 * @s2: second input char
 *
 * Description: the function compare two strings
 * Return: character count
 */
int _strcmp(char *s1, char *s2)
{
	int a, diff;

	for (a = 0; s1[a] != '\0'; ++a)
	{
		if (s1[a] > s2[a])
		{
			diff = s1[a] - s2[a];
			return (diff);
		}
		else if (s1[a] < s2[a])
		{
			diff = s1[a] - s2[a];
			return (diff);
		}
	}
	return (0);
}
