#include "main.h

/**
*print_alphabet- in lower case with _'putchar'
*
*Return: 0
*/

void print_alphabet(void)
{
char i = 'a';

while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
