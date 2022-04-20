#include "main.h"

/**
 *puts2 - prints every character of a sting
 *@str: a pointer to an int that will be updated
 *
 *return: void that means is correct
 */

void puts2(char *str)

{

int a;

for (a = 0; str[a] != '\0'; a++)

{

if (a % 2 == 0)

_putchar (str[a]);

}

_putchar ('\n');

}

