#include "main.h"

/**
 * more_numbers - more numbers
 *
 * Description: print 10 times the number, from 1 to 14
 * Return: always (0)
 */
void more_numbers(void)
{
	int i ,j ,k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i <= 1; i++)
		{
			for ( j = 0; j <= 9; j++)
			{
				if (!(i == 1 && j >= 5))
				{
					if (i)
						_putchar(j +'0');
					_putchar(i + '0');
				}
			}
		}
		_putchar('\n');
	}
}
