#include "main.h"
/**
*strlen - return lenght of string
*@s: char type - pointer
*Return: String's lenght
*/
int _strlen(char *s)
{
int len;
while (*s != '\0')
  {
    len += 1;
    *s = *s + 1;
  }

return (len);
}
