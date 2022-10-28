#include "main.h"
/**
*set_bit - sets value
*@n: long int
*@index: unsigned int
*Return: 1 if works
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index < sizeof(n) * 8)
{
*n = *n | (1 << index);
return (1);
}
return (-1);
}
