#include "main.h"

 /**
  * print_last_digit - print last digit of a number.
  * @n: takes number input
  *
  * Return: lastDigit
  */
int print_last_digit(int n)
{
int lD;
if (n < 0)
lD = -1 * (n % 10);
else
lD = n % 10;
_putchar(lD + '0');
return (lD);
}
