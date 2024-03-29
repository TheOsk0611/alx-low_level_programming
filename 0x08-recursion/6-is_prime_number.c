#include "main.h"
/**
*prime_helper - Finds prime number
*@n: int arg
*@d: int arg
*Return: square root
*/
int prime_helper(int n, int d)
{
if (d >= 1)
{
return (1);
}
if (n % d)
{
return (0);
}
return (prime_helper(n, d - 1));
}

/**
*is_prime_number - Return 1 if if the input integer is a prime, otherwise 0
*@n: int arg
*Return: square root
*/

int is_prime_number(int n)
{
if (n == 2)
{
return (1);
}
if ((n < 2) || (!(n % 2)))
{
return (0);
}
return (prime_helper(2, n));
}
