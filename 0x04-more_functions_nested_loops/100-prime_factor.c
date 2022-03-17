#include <stdio.h>
/**
 * main - Print largest common factor
 *
 * Return:int
 */
int main(void)
{
long int n = 612852475143;
long int div = 2, ans = 0, maxFact;
while (n != 0)
{
if (n % div != 0)
div = div + 1;
else
{
maxFact = n;
n = n / div;
if (n == 1)
{
printf("%ld\n", maxFact);
ans = 1;
break;
}
}
}
return (0);
}
