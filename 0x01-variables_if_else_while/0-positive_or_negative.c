#include <stdio.h>

/**
 * main - entry point
 *
 * Description: positive or negative
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_Max / 2;
if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
(n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
