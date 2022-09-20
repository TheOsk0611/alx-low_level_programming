#include "main.h"
/**
 *swap_int -Swap values
*@a pointer to a
*@b pointer to b
*Return: Nothing
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
