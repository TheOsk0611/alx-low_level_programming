#include "main.h"
/**
*_puts - print string to stout
*@str: char array string type
*Description: only _putchar
*Return: Nothing
*/
void _puts(char *str)
{
int index;
  
for (index = 0; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
