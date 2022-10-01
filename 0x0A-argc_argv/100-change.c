#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - prints the minimun number of coins to make change money
*@argc: the arguments counter
*@argv: the arguments value
*Return: 1 exactly amount 0 otherwise
*/
int main(int argc, char *argv[])
{
int coins = 0, sum = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
sum = atoi(argv[1]);
if (sum < 0)
{
printf("0\n");
return (0);
}
while (sum / 25)
{
sum -= 25;
coins++;
}
while (sum / 10)
{
sum -= 10;
coins++;
}
while (sum / 5)
{
sum -= 5;
coins++;
}
while (sum / 2)
{
sum -= 2;
coins++;
}
coins += sum;
printf("%d\n", coins);
return (0);
}

