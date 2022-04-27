#include "main.h"
/**
 * _print_rev_recursion - Print a string in reverse
 * @m: the string to reverse
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *m)

{
if (*m == '\0')
{
return;
}
m++;
_print_rev_recursion(m);
m--;
_putchar(*m);
}
