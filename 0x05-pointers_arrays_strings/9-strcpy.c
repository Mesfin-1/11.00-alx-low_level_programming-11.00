#include "main.h"
/**
 *_strcpy - copies the strig pointed to by src
 *@dest: a pointer to an int that will be updated
 *@src: b pointer to an int that will be updated
 *return: void that means is correct
 */

char *_strcpy(char *dest, char *src)

{

int i;

i = 0;

while (src[i]) != '\0')

{

dest[1] = src[i];

i++;

}

dest[1] = '\0';

return (dest);

}
