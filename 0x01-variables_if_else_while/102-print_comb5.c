#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Description: using the main function
 *
 * Return: 0;
 */

int main(void)
{
	int x, y;

	for (x = 0 ; x < 100 ; x++)
	{
		for (y = x + 1 ; y < 100 ; y++)
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');

			putchar(' ');

			putchar(y / 10 + '0');
			putchar(y % 10 + '0');

			if (x == 98 && y == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
