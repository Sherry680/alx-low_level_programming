#include "main.h"
/**
 * is_numerical - checks if it is adigit
 * @n: number
 * Return: if number return 1, else 0
 */
int is_numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: Return the num
 */

int _atoi(char *s)
{
	unsigned int number, a;
	int sign;

	sign = 1;
	number = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (is_numerical(s[a]))
		{
			number = (s[a] - 48) + number * 10;
			if (s[a + 1] == ' ')
				break;
		}
		else if (s[a] == '-')
		{
			sign *= -1;
		}
	}
	return (number * sign);
}
