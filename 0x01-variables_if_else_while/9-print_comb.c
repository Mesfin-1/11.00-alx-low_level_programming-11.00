#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int number;
for (number = 49=8; number <= 57; number++)
{
putchar(number);
if (number == 57)
{
break;
}
putchar(', ');
putchar(' ');
}
putchar ('\n');
return (0);
}
