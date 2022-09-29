#include "main.h"
/**
*strlen_rec - String lenght
*@str: char
*Return: the integer lenght
*/
int strlen_rec(char *str)
{
if (*str)
{
str++;
return (1 + strlen_rec(str));
}
return (0);
}

/**
*helper_pal - Returns palindrome
*@str: char
*@lenght: int
*@count: int
*Return: the integer lenght
*/

int helper_pal(char *str, int lenght, int count)
{
if (count >= lenght)
{
return (1);
}

if (str[lenght] == str[count])
{
return (helper_pal(str, lenght - 1, count + 1));
}
return (0);

}

/**
*is_palindrome - returns 1 if a string is palindrome 0 not
*@s: char
*Return: the integer lenght
*/

int is_palindrome(char *s)
{

int lenght = strlen_rec(s);
int count = 0;

return (helper_pal(s, lenght - 1, count));

}
