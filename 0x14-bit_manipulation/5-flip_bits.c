#include "main.h"
/**
*flip_bits - number of bits
*@n: lomng int
*@m: unsigned int
*Return: 1 works -1 fail
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int mask = 0, index;
index = n ^ m;
while (index > 0)
{
if (index & 1)
{
mask++;
}
index >>= 1;
}
return (mask);
}
