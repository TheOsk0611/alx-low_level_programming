#include "main.h"
/**
*_puts - print string to stout
*@str: char array string type
*Description: only _putchar
*Return: Nothing
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
_putchar('\n');
}
