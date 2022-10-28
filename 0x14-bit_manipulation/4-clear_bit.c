#include "main.h"
/**
*clear_bit - sets the value
*@n: long int
*@index: unsigned int
*Return: 1- works -1 fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1 << index;
if (index < sizeof(n) * 8)
{
*n = (*n & ~mask);
return (1);
}
return (-1);
}
