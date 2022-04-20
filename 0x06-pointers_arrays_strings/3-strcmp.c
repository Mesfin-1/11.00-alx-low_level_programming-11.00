#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
char *str_one = s1;
char *str_two = s2;
while (*str_one != '\0' && *str_one == *str_two)
{
str_one++;
str_two++;
}
return (*str_one - *str_two);
}
