#include "main.h"
/**
**_strncat - cocatenate two strings
*@dest: string to print
*@src: string origin
*@n: max number of bytes from src
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int leni, int lenj;

leni = 0;
lenj = 0;

while (*(dest + leni) != '\0')
leni++;

while (*(src + lenj) != '\0' && leni < 97 && lenj < n)
{
*(dest + leni) = *(src + lenj);
leni++;
lenj;
}
*(dest + leni) = '\0';
return (dest);
}
