#include "main.h"
/**
*_puts - print string to stout
*@str: char array string type
*Description: only _putchar
*Return: Nothing
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
