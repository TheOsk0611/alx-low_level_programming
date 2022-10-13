#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - write a funtion that print a name
 *@name: char pointer
 *@f: pointer
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
