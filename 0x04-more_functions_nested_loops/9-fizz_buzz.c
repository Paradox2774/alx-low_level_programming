#include <stdio.h>

/**
 * main - a program that solves the 'FizzBuzz' test
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz ");
		else if ((i % 5) == 0 && (i % 3) != 0 && i != 100)
			printf("Buzz ");
		else if ((i % 5) == 0 && (i % 3) != 0 && i == 100)
			printf("Buzz");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
