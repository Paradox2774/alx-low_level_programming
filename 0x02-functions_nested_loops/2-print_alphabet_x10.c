#include "main.h"

/**
 * print_alphabet_x10 - function to print abc 10 times
 * Description: using print_alphabet_x10 function
 * 
 * Return: 0
*/

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
