#include "variadic_functions.h"
/**
*sum_them_all - Return sum of all parameters
*@n: the number of parameters passed to the function
*@...: calculate the sum of
*Return: int sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int index, sum = 0;
va_start(nums, n);
if (n == 0)
{
return (0);
}
for (index = 0; index < n; index++)
{
sum += va_arg(nums, unsigned int);
}
va_end(nums);
return (sum);
}

