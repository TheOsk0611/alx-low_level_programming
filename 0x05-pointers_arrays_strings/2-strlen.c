#include "main.h"
/**
*strlen - return lenght of string
*@s: char type - pointer
*Return: String's lenght
*/
int _strlen(char *s)
{
int len;

len = 0;
while (*(s + len) != '/0')
len++;
return (len);
}
