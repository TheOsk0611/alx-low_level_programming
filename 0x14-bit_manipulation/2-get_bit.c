#include "main.h"
/**
*get_bit - get value of a bit given in index
*@n: long int
*@index: unsigned int
*Return: bit a index
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1;
if (index > sizeof(n) * 8)
{
return (-1);
}
mask <<= index;
if (mask & n)
return (1);
else
return (0);
}
