#include <stdio.h>

/**
 * print_to_98 - prints all natural nuber from input to 98
 *		in ordseparated by a coma followed by a space.
 * @n: The number to begin counting at
 * Return: number
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
