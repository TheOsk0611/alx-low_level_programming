#include "main.h"

/**
*factorial - returns the lenght of string
*@n: int arg
*Return: int
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n > 0)
{
return (n * factorial(n - 1));
}
return (1);
}
