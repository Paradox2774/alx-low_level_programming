#include "main.h"

/**
 * print _alphabet - function to print abc
 * Description: using print_alphabet function
 *
 * Return: 0
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
