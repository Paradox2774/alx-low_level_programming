#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: height and width of triangle
 * Return: 0
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j < (size - i))
				{
					_putchar(' ');
					continue;
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
