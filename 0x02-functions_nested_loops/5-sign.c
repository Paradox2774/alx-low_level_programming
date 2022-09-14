#include "main.h"

/**
 * print_sign - function to check for a sign of a number
 * @n: is the int that will be used as argument of the function
 *
 * Return: 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < )
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
