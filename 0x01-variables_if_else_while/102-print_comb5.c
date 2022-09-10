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
        int i, j, k, m;

        i = 48;
        while (i < 58)
        {
                j = 48;
                while (j < 58)
                {
                        m = j + 1;
                        k = i;
                        while (k < 58)
                        {
                                while (m < 58)
                                {
                                        putchar(i);
                                        putchar(32);
                                        putchar(k);
                                        putchar(m);
                                        if (i < 57 || j < 56 || k < 57 || m < 57)
                                        {
                                                putchar(44);
                                                putchar(32);
                                        }
                                        m++;
                                }
                                k++;
                        }
                        j++;
                }
                i++;
        }
        putchar(10);
        return (0);
}
