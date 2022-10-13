#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * @name: the name to be printed
 * @f: a pointer to a function that accepts a string as
 * parameter and returns nothing
 * Return: returns nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
