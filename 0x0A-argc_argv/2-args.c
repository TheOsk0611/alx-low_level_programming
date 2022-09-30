#include "main.h"
#include <stdio.h>

/**
*main - print all arguments that receives
*@argc: the argument counter
*@argv: the argument values
*Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
