#include <stdio.h>

/**
 * main - prints the letters of the alphabet
 *
 * Description: using main function
 * this program prints the letters of the alphabet except e and q
 * Return: 0
 */
int mai(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
