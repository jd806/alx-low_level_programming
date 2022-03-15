#include "main.h"
/**
* main - Print _putchar
*
* Return: int
*/
int main(void)
{
int i;
char text[] = "_putchar";

for (i = 0; i < 8; i++)
{
_putchar(text[i]);
}
_putchar('\n');

return (0);
}
