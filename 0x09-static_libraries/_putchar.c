#include <unistd.h>
/**
+_putchar - writes character
*@c: char to print
*Return: 1
*On Error, -1
*/

int _putchar(char c)
{
  return (write(1, &c,1));
}
