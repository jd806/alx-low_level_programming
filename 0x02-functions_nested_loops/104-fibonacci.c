#include <stdio.h>

/**
* main - print first 100 Fibonacci numbers
*
* Return: always 0
*/
int main(void)
{
int i;
unsigned long a = 1;
unsigned long b = 2;
unsigned long c = 3;

printf("1, 2, ");
for (i = 3; i <= 100; i++)
{
c = a + b;
printf("%lu", c);
a = b;
b = c;


if (i < 100)
printf(", ");
}
printf("\n");

return (0);
}
