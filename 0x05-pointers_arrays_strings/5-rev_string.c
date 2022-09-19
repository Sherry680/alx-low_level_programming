#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input string
 * Description: reverse a string
 * Return: 0
 */
void rev_string(char *s)
{
	int left, l, temp;

	left = 0;
	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	l--;
	while (l > left)
	{
		temp = s[l];
		s[l--] = s[left];
		s[left++] = temp;
	}
}
