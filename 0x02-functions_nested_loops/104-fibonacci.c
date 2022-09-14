#include <stdio.h>

/**
 * main - prints the first 97 Fibonacci
 *
 * Return : 0
*/
int main(void)
{
	int count;
	unsigned long x1 = 0, x2 = 1, sum;
	unsigned long x1_y1, x1_y2, x2_y1, x2_y2;
	unsigned long y1, y2;

	for (count = 0; count < 92; count++)
	{
		sum = x1 + x2;
		printf("%lu, ", sum);

		x1 = x2;
		x2 = sum;
	}
	x1_y1 = x1 / 10000000000;
	x2_y1 = x2 / 10000000000;
	x1_y2 = x1 % 10000000000;
	x2_y2 = x2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		y1 = x1_y1 + x2_y1;
		y2 = x1_y2 + x2_y2;

		if (x1_y2 + x2_y2 > 9999999999)
		{
			y1 += 1;
			y2 %= 10000000000;
		}

		printf("%lu%lu", y1, y2);

		if (count != 98)
			printf(",");

		x1_y1 = x2_y1;
		x1_y2 = x2_y2;
		x2_y1 = y1;
		x2_y2 = y2;
	}
	printf("\n");
	return (0);
}
