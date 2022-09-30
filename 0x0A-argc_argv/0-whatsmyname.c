#include "main.h"
#include <stdio.h>

/**
*main - prints name followed by new name
*@argc: argument count
*@argv: argument value, string comes after calling function
*Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);

return (0);
}
