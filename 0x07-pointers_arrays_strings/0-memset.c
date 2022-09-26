 #include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: memory area to be filled
* @b: char to copy
* @n: numbers of time to copy b
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
for (index = 0, n > 0; index++)
{
s[index] = b;
n -=1;
}
return (s);

}

