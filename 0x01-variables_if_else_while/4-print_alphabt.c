#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always  (success/correct)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;
else if (alphabet == 'e')
continue;
putchar(alphabet);
}
return (0);
}
