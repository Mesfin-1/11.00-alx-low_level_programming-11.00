#include "main.h"

/**
 *puts_half prints every other character of a string
 *@str: a pointer to an int that will be updated
 *
 *return: void that means is correct
 */

void puts_half(char *str)

{

int i,  last;

i = 0;

while (str[i] != '\0')

{

i++;

}

last = (i + 1) / 2;

for (i = last; str[i]; i++)

{

-putchar (str[i]);

}

_putchar ('\n');

}

