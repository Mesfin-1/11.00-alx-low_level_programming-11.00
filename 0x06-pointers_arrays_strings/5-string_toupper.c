#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @p: The string will be modified
  *
  * Return: char var
  */
char *string_toupper(char *p)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}
