#include "main.h"
/**
 * _strlen_recursion - return length of a string
 * @s: string input
 * Description: return length of a string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
